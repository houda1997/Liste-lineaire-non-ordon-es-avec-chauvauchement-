#include "Modèle_TP2.h"


/*****============================== Lire une chaine de caracteres ======================*****/
// Lire une chaine de caracteres du clavier en supprimant le "\n" qu'ajoute la fonction standard fgets

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    // On lit le texte saisi au clavier
    if (fgets(chaine, longueur, stdin) != NULL)  // Pas d'erreur de saisie ?
    {
        positionEntree = strchr(chaine, '\n'); // On recherche l'"Entrée"
        if (positionEntree != NULL) // Si on a trouvé le retour à la ligne
        {
            *positionEntree = '\0'; // On remplace ce caractère par \0
        }
        return 1; // On renvoie 1 si la fonction s'est déroulée sans erreur
    }
    else
    {
        return 0; // On renvoie 0 s'il y a eu une erreur
    }
}


/*****============================== Inialiser le Fichier LnOVC ======================*****/
// Remplie le Fichier "Nomfichier" avec une seule donnee proposé par le constructeur

void Charg_Initial (char Nomfichier[])
{
    int i=1,j=0,t=0,m=0,taille=0,cle=0;
    char Tampon[]="018012345612345612345600Hello I'm a buffer"; //  l'enregistrement à ecrire: 018: taille de l'info ; 0: champs eff; 123456: cle

    Fichier=ouvrir(Nomfichier,'n'); //ouvrir un nouveau fichier
    i=Alloc_Bloc(Fichier);
    Aff_Entete(Fichier,1,i); //affecter premier bloc
    taille=strlen(Tampon); // calculer la taille de l'enregistrement
    Aff_Entete(Fichier,5,taille); // le nombre de caracteres inséres
        while (taille>0) //boucle pour copier l'enregistrement dans le Buf caractere par caractere
        {
                buf1.Tab[j]=Tampon[t];
                j++;
                t++;
                taille--;
        }
    buf1.suiv=-1;
    EcrirDir(Fichier,i,&buf1); //ecrire le buffer dans l MS
    Aff_Entete(Fichier,2,i); //dernier bloc
    Aff_Entete(Fichier,3,j); //derniere position libre
    Fermer(Fichier);
}

/*****============================== Recupere un mot du Fichier ======================*****/
// Recupere un mot d'une position precise 'j' d'un bloc precis 'i' d'une longeur nbc dans Mot

void Recup_Mot (LnOVC *Fichier,int *i,int *j,BUFFER *buf1, int nbc , char Mot [])
{
    int pos=0; // position de MOT
    int stop =0; //indique la fin de fichier
    int dernier=Entete(Fichier,2),tail_dernier = Entete (Fichier,3)-1 ;
    while (nbc >0 && (!stop)) //boucle copie 'nbc' caracteres de buffer dans MOT , 'stop' indique la fin de fichier
    {
        Mot [pos] =buf1->Tab[*j]; // ecrire un caractere dans MOT
        *j=*j+1 ; pos ++; nbc --;
        if (*i==dernier && *j> tail_dernier) //la fin de fichier
        {
            *i=-1;
            stop=1;
        }
        else
        {
            if (*j>=b) // chavechement
            {
                *j=0;
                *i=buf1->suiv;
                LireDir(Fichier,*i,buf1); //lire le bloc suivant
            }
        }
    }
}


/*****============================== Affiche les Donnes d'un Fichier ======================*****/
//Affiche chaque donnes du Fichier avec sa cle

void Affich_fichier (char Nomfichier [],int *ligne) // ligne un parametre pour l'affichage
{
    int j=0,taille=0,i=0, sauv,stop=0,cpt=1;
    char cle [Taille_Cle+1]="",mot[5]="",*info=NULL,tail_char[4],eff=0;

    Fichier=ouvrir(Nomfichier,'a');
    i=Entete(Fichier,1);
    if (i == 0 || (i == 1 && Entete(Fichier,3) ==0)) // fichier vide ou contient un buffer vide
    {
        gotoxy(15,*ligne+13);*ligne=*ligne+1;
        printf(" \nFICHIER VIDE.");
    }
    else
    {
        LireDir(Fichier,i,&buf1); // lire le buffer
        while (i != -1)
        {
                Recup_Mot(Fichier,&i,&j,&buf1,4,mot); //recuperer la taille et le champs effacé
                eff=mot[3];
                sprintf(tail_char,"%c%c%c",mot[0],mot[1],mot[2]); //concaténer la taille
                taille=atoi(tail_char); //la transformer en entier
                info=calloc((taille+1),sizeof(char)); //allocation dynamique de la chaine qui va contenir l'information, en l'initialisant a ""
                if (info == NULL)
                {
                    gotoxy(15,*ligne+13);*ligne=*ligne+1;
                    printf("\nECHEC DE ALLOCATION DYNAMIQUE!\n"); // Tester si l'allocation est bien faite
                    exit(1);
                }
                Recup_Mot(Fichier,&i,&j,&buf1,Taille_Cle,cle); //recuperer la cle
                Recup_Mot(Fichier,&i,&j,&buf1,taille,info); //recuperer l'information
                if(eff == '0') //on affiche s'il n'est pas supprimer logiquement
                {
                    gotoxy(15,*ligne+13);*ligne=*ligne+1; // l'affichage
                    printf("============= ENREGISTREMENT %d",cpt); cpt++;
                    gotoxy(15,*ligne+13);*ligne=*ligne+1;
                    printf("L'information : %s",info); // afficher l'information
                    gotoxy(15,*ligne+13);*ligne=*ligne+1;
                    printf("La cle : %s ",cle);
                }
                free(info);
            }
        }
        Fermer(Fichier);
}

/*****============================== Rechercher une cle ===========================*****/
// Rcherche une cle dans le Fichier et retourne si elel existe ou pas, si oui il retourne en plus sa position 'j' dans le bloc 'i'

void Rechercher (char Nomfich [20],char cle [], int *i,int *j,int *Trouv)
{
    int nbc=0; // pour contenir la taille de l'information
    int Sauv_P,Sauv_B; //pour sauvgarder le bloc et la position
    char Mot [5]=""; // va contenir la taille + champs eff
    char sauv[Taille_Cle+1]=""; // va contenir la cle
    char tail_char[4]=""; // va contenir la taille
    char *info = NULL; //  va contenir l'information
    char Eff=0;

    Fichier = ouvrir(Nomfich,'a');
    *i=Entete(Fichier,1);  //initialiser le blac au premier bloc
    *j=0; // intialiser la position a 0
    *Trouv=0;
    LireDir(Fichier,*i,&buf1);
    while ( !*Trouv && *i!=-1) //on boucle tant que on n'a pas trouver et c'est pas la fin de fichier
      {
        Sauv_P=*j; // on sauvgarde la position de début de l'enregistrement
        Sauv_B=*i; // on sauvgarde le bloc où se trouve l'enregistrement
        Recup_Mot(Fichier,i,j,&buf1,4,Mot); //on recupere la taille et le champs effacer
        Eff=Mot[3];
        sprintf(tail_char,"%c%c%c",Mot[0],Mot[1],Mot[2]); //on concatene la taille
        nbc=atoi(tail_char); //la transformer en entier
        Recup_Mot(&Fichier,i,j,&buf1,Taille_Cle,sauv); // recupere la cle
        if (! strcmp(sauv,cle) && Eff=='0') // la cle exite et n'est pas efface logiquement
        {
            *Trouv=1;
            *j=Sauv_P; // on repositionne j au début de l'enregistrement
            *i=Sauv_B; //on repositionne i au bloc correspondant
        }
        else  // on positionne j au début de l'enregistrement suivant
        {
            info = calloc((nbc+1),sizeof(char));
            if (info == NULL)
                {
                    printf("\nECHEC DE ALLOCATION DYNAMIQUE!\n");
                    exit(1);
                }
            Recup_Mot(Fichier,i,j,&buf1,nbc,info); //va positionner i et j
        }
      }
      Fermer(Fichier);
}

/*****============================== Inserer une donnée dans le Fichier ======================*****/
// Inserer une information de taille 'taille' et de cle 'cle' dans le Fichier

void Insertion_LnOVC(char Nomfichier[],char cle[],char *info,int taille) //taille : taille de l'information
{
    int trouve=0,i=0,j=0,k=1,t=0; // t : la position dans info
    int tail_enreg=0;
    char *sauv; // va contenir l'enregistrement


    Rechercher(Nomfichier,cle,&i,&j,&trouve);
    if(!trouve) //on insere dans le dernier bloc s'il n'existe pas
    {
        Fichier=ouvrir(Nomfichier,'a');
        i=Entete(Fichier,2); // on accède au dernier bloc
        j=Entete(Fichier,3); // a la derniere position libre
        LireDir(Fichier,i,&buf1);
        tail_enreg=taille+Taille_Cle+4; //la taille de tous l'enregistrement
        Aff_Entete(Fichier,5,Entete(Fichier,5)+tail_enreg); // incrémenter le nombre de caracteres inséres
        sauv=calloc((tail_enreg+1),sizeof (char)); // allouer la chaine de l'enregistrement
        if (sauv == NULL)
        {
            printf("\nECHEC ALLOCATION DYNAMIQUE!");
            exit(1);
        }
        sprintf(sauv,"%d%d%d0%s%s",taille/100,(taille/10)%10,taille%10,cle,info);
        while (tail_enreg > 0) // on insere caractere par caractere
        {
            if (j < b) // pas de chauvauchement
            {
                buf1.Tab[j]=sauv[t];
                j++;
                t++;
                tail_enreg --;
            }
            else // cas de chauvauchement
            {
                buf1.suiv=Alloc_Bloc(Fichier); // allouer un nouveau bloc
                EcrirDir(Fichier,i,&buf1); // ecrire le bloc précédant
                i=buf1.suiv;
                LireDir(Fichier,i,&buf1); //lire le bloc suivant
                j=0; // repositionne a 0
            }
        }
        buf1.suiv=-1;
        EcrirDir(Fichier,i,&buf1); // ecrire le dernier enregistrement
        Aff_Entete(Fichier,2,i); //mettre a jour l'entete
        Aff_Entete(Fichier,3,j);
        Fermer(Fichier);
    }
}

/*****============================== Supprimer une donnée dans le Fichier ======================*****/
// Suprimer une information logiquement de cle 'cle' dans le Fichier, et déclenche une reorganization a un certain pourcentage

 void Supprimer (char Nomfichier [], char cle [],int *ligne)
 {
     int i=0,j=0,trouve=0,nbc=0;
     char Mot[4]="",Nomfichier2[20]="";

     Rechercher(Nomfichier,cle,&i,&j,&trouve);
     if (trouve) //on supprime s'il existe
     {
         Fichier=ouvrir(Nomfichier,'a');
         LireDir(Fichier,i,&buf1);
         Recup_Mot(Fichier,&i,&j,&buf1,3,Mot); // on recupere la taille on positionnant j au champs effacé
         buf1.Tab[j] = '1'; // on mettre a jour le champs eff
         EcrirDir(Fichier,i,&buf1);//reecrire le bloc
         nbc=atoi(Mot); //mettre a jour le nombre de caractere supprimer logiquement
         Aff_Entete(Fichier,4,Entete(Fichier,4) + nbc);
         Fermer(Fichier);
     }
     else
     {
         gotoxy(15,*ligne+10); *ligne = *ligne +1;
         printf("VOTRE CLE N'EXISTE PAS !");
     }
     if ((Entete(Fichier,4) / Entete(Fichier,5)) *100 > u) //declencher la reorganisation
     {
        sprintf(Nomfichier2,"%sReorganisation",Nomfichier);
        Re_organisation(Nomfichier,Nomfichier2);
     }
 }

 /*****============================== Re-Inserer une donnée dans le Fichier ======================*****/
// Re-Inserer un Enregistrement dans le Fichier en cas de Reorganisation

void Re_Insert (char Nomfichier [], char Enreg [], int taille )
{
    int j,i,t=0;

        Fichier2=ouvrir(Nomfichier,'a');
        i=Entete(Fichier2,2); //dernier bloc
        j=Entete(Fichier2,3); // premiere position libre
        sprintf(buf2.Tab,"%s",""); // initialiser le buffer a vide
        Aff_Entete(Fichier2,5,Entete(Fichier2,5)+taille); //mettre a jour le nombre de caractere insere dans F2
        while (taille > 0) //on insere l'enregistrement
        {
            if (j < b)
            {
                buf2.Tab[j]=Enreg[t];
                j++;
                t++;
                taille --;
            }
            else
            {
                buf2.suiv=Alloc_Bloc(Fichier2);
                EcrirDir(Fichier2,i,&buf2);
                i=buf2.suiv;
                LireDir(Fichier2,i,&buf2);
                j=0;
            }
        }
        buf2.suiv=-1;
        EcrirDir(Fichier2,i,&buf2); //ecrire le cas
        Aff_Entete(Fichier2,2,i);
        Aff_Entete(Fichier2,3,j);
        Fermer(Fichier2);
}


/*****============================== Re-organiser le Fichier ======================*****/
// Re-organiser le Fichier 'fichierIN' si le taux u est atteint ou depasser , le nouveau fichier reorganisè est :fichierOUT

void Re_organisation (char fichierIN []  , char fichierOUT [])
{
  int i,j=0,Sauv_B,Sauv_P,nbc;
  char Mot [25]="",tail_char[4]="",*Enreg=NULL,eff=0;



  Fichier = ouvrir(fichierIN,'a');
  Fichier2 = ouvrir(fichierOUT,'n'); // ouvrir le F2 en mode nouveau
  Aff_Entete(Fichier2,1,Alloc_Bloc(Fichier2));
  Aff_Entete(Fichier2,2,Entete(Fichier2,1));
  Aff_Entete(Fichier2,3,0);
  Fermer(Fichier2); // fermer F2

  i=Entete(Fichier,1);
  LireDir(Fichier,i,&buf1);
  while (i!=-1)
  {
      Sauv_B=i; //sauvgarder le bloc d'enregistrement
      Sauv_P=j; //sauvgarder la position du début de l'enregistrement
      Recup_Mot(Fichier,&i,&j,&buf1,4,Mot);
      sprintf(tail_char,"%c%c%c",Mot[0],Mot[1],Mot[2]);
      nbc=atoi(tail_char);
      nbc=nbc+Taille_Cle+4; //calculer la taille de tous l'enregistrement
      eff=Mot[3];
      Enreg=calloc((nbc+1),sizeof(char));
      Recup_Mot(Fichier,&Sauv_B,&Sauv_P,&buf1,nbc,Enreg); //recuperer tous l'enregistrement
      if (eff =='0') //reinserer s'il n'est pas supprimer
      {
         Re_Insert(fichierOUT,Enreg,nbc);
      }
     i=Sauv_B; //passer à l'enregistrement suivant
     j=Sauv_P;
  }
  Fermer(Fichier);
  remove(fichierIN);  // supprimer l'ancien fichier
  rename(fichierOUT,fichierIN); // renomer le nouveau fichier
}
