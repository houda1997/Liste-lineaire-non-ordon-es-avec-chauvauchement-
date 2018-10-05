#include "Menu_TP.h"
#include "Modèle_LnOVC.h"
typedef char chaine[1000];


void retourMenu() // Affiche un message pour retourner au menu
{
    printf("         APPUYEZ SUR N'IMPORTE QUELLE TOUCHE POUR RETOURNER AU MENU!\n");
    getch();
}
void AccessMenu() // Affiche un message pour accéder au menu
{
    printf("         APPUYEZ SUR N'IMPORTE QUELLE TOUCHE POUR ACCEDER AU MENU!\n");
    getch();
}

void entrer ()
{   int ligne=0;
    system("mode con LINES=300 COLS=152");
    system("COLOR 0F");
    gotoxy(40,15);
    printf(" A");Sleep(100);
    printf("B");Sleep(100);
    printf("O");Sleep(100);
    printf("U");Sleep(100);
    printf("C");Sleep(100);
    printf("H");Sleep(100);
    printf("A");Sleep(100);
    printf("M");Sleep(100);
    printf("A");Sleep(100);
    printf("L");Sleep(100);
    printf("A");Sleep(100);
    printf(" H");Sleep(100);
    printf("O");Sleep(100);
    printf("U");Sleep(100);
    printf("D");Sleep(100);
    printf("A");Sleep(100);
    printf(" & ");Sleep(100);
    printf("D");Sleep(100);
    printf("J");Sleep(100);
    printf("E");Sleep(100);
    printf("D");Sleep(100);
    printf("D");Sleep(100);
    printf("A");Sleep(100);
    printf("L");Sleep(100);
    printf(" H");Sleep(100);
    printf("A");Sleep(100);
    printf("N");Sleep(100);
    printf("A");Sleep(100);
    printf("N");Sleep(100);
    printf("E");Sleep(100);
    printf(" V");Sleep(100);
    printf("O");Sleep(100);
    printf("U");Sleep(100);
    printf("S");Sleep(100);
    printf(" P");Sleep(100);
    printf("R");Sleep(100);
    printf("E");Sleep(100);
    printf("S");Sleep(100);
    printf("E");Sleep(100);
    printf("N");Sleep(100);
    printf("T");Sleep(100);
    printf("E");Sleep(100);
    printf("N");Sleep(100);
    printf("T ");Sleep(100);
    printf(".");Sleep(100);printf(".");Sleep(100);printf(".");Sleep(100);
    printf("\n");
   system("cls");
  gotoxy(40,10+ligne);ligne ++;textcolor (3);Sleep(100);
printf("   ___________    _____          _                _____   _   _      _____");gotoxy(40,10+ligne);ligne ++;textcolor (1);Sleep(100);
printf(" |_   _| ___    / __        _   | |             |  _  | | | |    /   __  |");gotoxy(40,10+ligne);ligne ++;textcolor (1);Sleep(100);
printf("   | | | |_/ /   `' / /    (_)  | |      _ __   | | | | | | | |  |  /   / ");gotoxy(40,10+ligne);ligne ++;textcolor (3);Sleep(100);
printf("   | | |  __/     / /           | |     |   _ | | | | | | | | |  |  |     ");gotoxy(40,10+ligne);ligne ++;textcolor (3);Sleep(100);
printf("   | | | |       / /___     _   | |___  | | | | |     /       /  |  | __/|  " );gotoxy(40,10+ligne);ligne ++;textcolor (11);Sleep(100);
printf("   |_/ \_|       \_____/   (_)     _____/ |_| |_|   ___/    ___/    \ ____  / ");gotoxy(40,10+ligne);ligne ++;textcolor (11);Sleep(100);






gotoxy(40,20+ligne);ligne ++;

printf("                            ..,.");gotoxy(40,20+ligne);ligne ++;
printf("               ,Y1UU7vr:  .Uj    ,7jLYvjUU:              ");gotoxy(40,20+ligne);ligne ++;textcolor (2);Sleep(100);
printf("              ;1:   .::JGLBBBB  vM,      .Yj             ");gotoxy(40,20+ligne);ligne ++;textcolor (2);Sleep(100);
printf("             LY  ..:BBBBqN0BZBSrB, ,,,,,.  US            ");gotoxy(40,20+ligne);ligne ++;textcolor (10);Sleep(100);
printf("             B  ,,.,BEMBMOBBMX:irL:.:,:,:. .M            ");gotoxy(40,20+ligne);ligne ++;textcolor (14);Sleep(100);
printf("             B  ,:..vBNGi,.          .,:,, .q            ");gotoxy(40,20+ligne);ligne ++;textcolor (4);Sleep(100);
printf("             rk  .,.          .   .   .,,  Yr            ");gotoxy(40,20+ligne);ligne ++;textcolor (4);Sleep(100);
printf("              ;Sr.   rBBB: ..... BBBM    75i             ");gotoxy(40,20+ligne);ligne ++;textcolor (12);Sleep(100);
printf("               .J0i  LBBB: .... .BBB0  ,Mr               ");gotoxy(40,20+ligne);ligne ++;textcolor (12);Sleep(100);
printf("                 7S  .r8Or     .  8B77.iX                ");gotoxy(40,20+ligne);ligne ++;textcolor (5);Sleep(100);
printf("                 YY ,vi,:   OB    ..::::q                ");gotoxy(40,20+ligne);ligne ++;textcolor (5);Sleep(100);
printf("                 iZ.,.,    .BB      .: Yq                ");gotoxy(40,20+ligne);ligne ++;textcolor (13);Sleep(100);
printf("                  B:.,,    Y:,U     ...B;                ");gotoxy(40,20+ligne);ligne ++;textcolor (13);Sleep(100);
printf("                  .8:                .XL                 ");gotoxy(40,20+ligne);ligne ++;textcolor (4);Sleep(100);
printf("                   iBur,          .;LM8                  ");gotoxy(40,20+ligne);ligne ++;textcolor (4);Sleep(100);
printf("                  ir UBj1SU1U1U2u27BS  5X                ");gotoxy(40,20+ligne);ligne ++;textcolor (12);Sleep(100);
printf("                 rJ  B:   ::::::.  .8   vO               ");gotoxy(40,20+ligne);ligne ++;textcolor (12);Sleep(100);
printf("                 P  2B   ......,.   B20  M:              ");gotoxy(40,20+ligne);ligne ++;textcolor (5);Sleep(100);
printf("                LL  BM  .,:.,.,,,.  OBJ rM               ");gotoxy(40,20+ligne);ligne ++;textcolor (5);Sleep(100);
printf("                7P  SB   ,,,.,.,..  Mr 5k                ");gotoxy(40,20+ligne);ligne ++;textcolor (5);Sleep(100);
printf("                .G2vLB:     . .     Bjr.                 ");gotoxy(40,20+ligne);ligne ++;textcolor (13);Sleep(100);
printf("                     :k  7:i:iLu.  2Y                   ");gotoxy(40,20+ligne);ligne ++;textcolor (13);Sleep(100);
printf("                     YM  :8BUvNE   LM....           ");gotoxy(40,20+ligne);ligne ++;textcolor (13);Sleep(100);
printf("               .,irv70B.  NBBBBS  .BM5Uu7r::.   ");gotoxy(40,20+ligne);ligne ++;textcolor (13);Sleep(100);
printf("                ..::r7ZqGZMNZEMMM8OOU77i:,.     ");gotoxy(40,20+ligne);ligne ++;textcolor (13);Sleep(100);






    gotoxy(10,25);
    AccessMenu();
    system("cls");
    system("COLOR 0F");
    textbackground(0);
    textcolor (15) ;
}
void cadrePrinc ( int l , int L , int x , int y ) // Dessine un cadre de longeur == L et de largeur == l à partir du point M(x,y) de la console
{
    int i ;
    textcolor(6);
    gotoxy(x,y);
    printf("%c",178);
    gotoxy(x+20,y + L);
    printf("%c",178);
    gotoxy(x+l,y);
    printf("%c",178);
    gotoxy(x+l,y+L);
    printf("%c",178);
    for (i=1 ; i <= l-1 ; i++  )
    {
        gotoxy(x+i,y);
        printf("%c",178);
        gotoxy(x+i,y+L);
        printf("%c",178);
    }
    for (i=1 ; i <= L-1; i++ )
    {
        gotoxy(x,y+i);
        printf("%c",178);
        gotoxy(x+l,y+i);
        printf("%c",178);
    }

}
void entete ()
{
    int i ;
    gotoxy(50,1);
    printf("REPUBLIQUE ALGERIENNE DEMOCRATIQUE ET POPULAIRE ");
    gotoxy(55,3);
    printf("ECOLE SUPERIEURE D'INFORMATIQUE (ESI)\n");
    for (i=1 ; i <= 152 ; i++) printf("_");
    printf("\n") ;
}

void pied_de_page ()
{
    int i ;
    gotoxy(1,35);
    for (i=1 ; i <= 152 ; i++) printf("_");
    gotoxy(70,37);
    printf("REALISE PAR:");
    gotoxy(56,39);
    printf("ABOUCHAMALA HOUDA   |   DJEDDAL HANANE");
    gotoxy(63,41);
    printf("SECTION A   |   GROUPE 1");
    gotoxy(70,43);
    printf("ENCADRE PAR:");
    gotoxy(64,45);
    printf("Mme.EL-ALLIA Nadia BENAHMED");
    gotoxy(61,47);
    printf("ANNEE UNIVERSITAIRE : 2016/2017\n");
    for (i=1 ; i <= 152 ; i++) printf("_");

}

void cadre ( int l , int L , int x , int y ) // Dessine un cadre de longeur == L et de largeur == l à partir du point M(x,y) de la console
{
    int i ;
    textcolor(6);
    gotoxy(x,y);
    printf("%c",178);
    gotoxy(x,y + L);
    printf("%c",178);
    gotoxy(x+l,y);
    printf("%c",178);
    gotoxy(x+l,y+L);
    printf("%c",178);
    for (i=1 ; i <= l-1 ; i++  )
    {
        gotoxy(x+i,y);
        printf("%c",178);
        gotoxy(x+i,y+L);
        printf("%c",178);
    }
    for (i=1 ; i <= L-1; i++ )
    {
        gotoxy(x,y+i);
        printf("%c",178);
        gotoxy(x+l,y+i);
        printf("%c",178);
    }

}


int Affich_menu() // Affiche le menu principal et donne le choix de l'utilisateur
{

    chaine t [] = {  "1-MANUEL D'UTILISATION.                                         ",
                     "2-CREER UN FICHIER.                                             ",
                     "3-RECHERCHER UNE INFORMATION.                                   ",
                     "4-INSERER UNE INFORMATION                                       ",
                     "5-SUPPRIMER UNE INFORMATION                                     ",
                     "6-AFFICHER LE FICHIER                                            ",
                     "7-Sortir                                                         ",
                  };

    int n = 7 ; // TAILLE DU TABLEAU DE CHAINE
    int i , quite = 1, y = 15  , x= 30 , L= n+1 , l=  strlen(t[1])+6 ;
    char c1,c2 ;
    entete();
    pied_de_page();
    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(7);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    gotoxy(x-2,y-2);
    printf("%c",201);
    gotoxy(x-2,y + L);
    printf("%c",200);
    gotoxy(x-2+l,y-2);
    printf("%c",187);
    gotoxy(x-2+l,y+L);
    printf("%c",188);
    for (i=1 ; i <= l-1 ; i++  )
    {
        gotoxy(x-2+i,y-2);
        printf("%c",205);
        gotoxy(x-2+i,y+L);
        printf("%c",205);
    }
    for (i=1 ; i <= L+1; i++ )
    {
        gotoxy(x-2,y-2+i);
        printf("%c",186);
        gotoxy(x-2+l,y-2+i);
        printf("%c",186);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;
        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(7);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(7);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(7);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(7);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}

void Manuel (int *ligne)
{
    gotoxy(15,*ligne+10);*ligne=*ligne+1;
    printf("                      BIENVENUE DANS NOTRE PROGRAMME     ");gotoxy(15,*ligne+13);*ligne = *ligne+1;
    printf("  Ce programme consiste a travailler avec un Fichier LnOVC. Vous ne conaissez pas de quoi il s'agit? ");gotoxy(15,*ligne+13);*ligne=*ligne +1;
    printf("C'est pas Grave ! C'est pareil que travailler avec un fichier normal!");gotoxy(15,*ligne+13);*ligne=*ligne+1;
    printf("On vous demande juste de respecter quelques instruction!");gotoxy(15,*ligne+13);*ligne =*ligne+2;
    printf("C'est parti : ");gotoxy(15,*ligne+13);*ligne=*ligne+1;
    printf(".1.  La cle que vous inserez doit TOUJOURS etre composee de %d caractere",Taille_Cle);gotoxy(15,*ligne+13);*ligne=*ligne+1;
    printf(".2.  L'insertion ne prend pas en consideration les doublons (les cles sont uniques) ");gotoxy(15,*ligne+13);*ligne=*ligne+1;
    printf(".3.  Une Reorganisation automatique sera lancee des que la taux de supression sera atteint");gotoxy(15,*ligne+13);*ligne=*ligne+1;
}

void Menu ()
{ int finMenu=0,choix=0,ligne=0,Creer=0;
  char Nomfich1[20], Encore[4]="",Non[]="non";
  int k=4,i=1,j=0,trouv=10,taille=0,nb=0;
  char Mot[40];
  char a=0,cle [Taille_Cle + 1] ="", *info=NULL, Tampon[50]="";


    while (!finMenu)
    {
        choix=Affich_menu();
        textattr(0);
        system("cls");
        switch(choix)
        {
        case 1:
            ligne=0;
            textattr(3);
            cadrePrinc(110,50,10,5);
            textattr(15);
            Manuel(&ligne);
            gotoxy(5,17+ligne);
            retourMenu();
            system("cls");
            break;
        case 2 :
            ligne=0;
            textattr(3);
            cadrePrinc(110,50,10,5);
            textattr(15);
            gotoxy(15,10+ligne);ligne ++;
            printf("Donnez le Nom du Fichier : ");
            gets(Nomfich1);
            Charg_Initial(Nomfich1);
            Creer=1;
            gotoxy(15,13+ligne);ligne ++;
            printf("WOHOOO! LE FICHIER A ETE CREE AVEC SUCCES!");
            gotoxy(5,17+ligne);
            retourMenu();
            system("cls");
            break;
        case 3:
           ligne=0;
           textattr(3);
           cadrePrinc(110,50,10,5);
           textattr(15);
           gotoxy(15,10+ligne);ligne ++;
           printf("Donnez la cle que vous cherchez : ");
           gets(cle);
           Rechercher(Nomfich1,cle,&i,&j,&trouv);
           if (trouv==1)
           {
                gotoxy(15,10+ligne);ligne ++;
                printf("Votre Cle Existe ! Elle se trouve dans le bloc %d et commence de la position %d",i,j);

           }
           else
           {
               gotoxy(15,10+ligne);ligne ++;
               printf("Votre Cle n'existe pas ! Cependant vous pouvez bien l'inserez !");
           }
           gotoxy(5,17+ligne);
           retourMenu();
           system("cls");
           break;
      case 4 :
           sprintf(Encore,"%s","");
           ligne=0;
           textattr(3);
           cadrePrinc(110,50,10,5);
           textattr(15);
           gotoxy(15,10+ligne);ligne ++;
           while (strcmp(Encore,Non))
           {
                gotoxy(15,10+ligne);ligne ++;
                printf(" LA DONNEE : ");
                lire(Tampon,50);
                taille=strlen(Tampon);
                 info =calloc((taille+1) ,sizeof (char));
                 if (info == NULL)
                 {
                   gotoxy(15,10+ligne);ligne ++;
                   printf ("\nECHEC D'ALLOCATION DYNAMIQUE! \n");
                   exit(1);
                 }
               sprintf(info,"%s",Tampon);
               gotoxy(15,10+ligne);ligne ++;
               printf("LA CLE : ");
               gets(cle);
               gotoxy(15,10+ligne);ligne ++;
               //printf("LA CLE : %s",cle);
               Insertion_LnOVC(Nomfich1,cle,info,taille);
               free(info);
               gotoxy(15,10+ligne);ligne ++;
               printf("Encore? (oui/non) : ");
               gets(Encore);
           }
           gotoxy(5,17+ligne);
           retourMenu();
           system("cls");
           break;

      case 5 :
          sprintf(Encore,"%s","");
           ligne=0;
           textattr(3);
           cadrePrinc(110,50,10,5);
           textattr(15);
           gotoxy(15,10+ligne);ligne ++;
           while(strcmp(Encore,Non))
            {
                gotoxy(15,10+ligne);ligne ++;
                printf("La cle: ");
                gets(cle);
                Supprimer(Nomfich1,cle,&ligne);
                gotoxy(15,10+ligne);ligne ++;
                printf("Encore ? ");
                gets(Encore);
            }
            gotoxy(5,17+ligne);
           retourMenu();
           system("cls");
           break;
      case 6:
           ligne=0;
           textattr(3);
           cadrePrinc(110,50,10,5);
           textattr(15);
           gotoxy(15,10+ligne);ligne ++;
           Affich_fichier(Nomfich1,&ligne);
           gotoxy(5,17+ligne);
           retourMenu();
           system("cls");
           break;
      case 7:
           ligne=0;
           textattr(3);
           cadrePrinc(110,50,10,5);
           textattr(15);
           gotoxy(15,10+ligne);ligne ++;
           printf(" Bye Bye !!!");
           finMenu=1;
           gotoxy(5,17+ligne);
       }
     }
}
