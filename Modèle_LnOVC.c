#include "Modèle_LnOVC.h"


  /**========================================================================================**/
 /**                               LA MACHINE ABSTRAITE                                     **/
/**========================================================================================**/


/********************************* ENTETE *****************************/
/*         Retourner la Valeur du i'eme parametre de L 'Entete       */
int Entete(LnOVC *Fichier,int i)
{
    switch (i)
    {
    case 1:
        return (Fichier->entete.tete);
        break;
    case 2:
        return (Fichier->entete.queue);
        break;
    case 3:
        return (Fichier->entete.pos_libre);
        break;
    case 4:
        return (Fichier->entete.nbr_supp);
        break;
    case 5:
        return (Fichier->entete.nbr_ins);
        break;
    }
}
/**********************************************************************/


/********************************* AFF_ENTETE *****************************/
/*        Affecter une Valeur 'j' au 'i'eme parametre de L'Entete       */
void Aff_Entete (LnOVC *Fichier,int i, int j)
{
    switch (i)
    {
    case 1:
        Fichier->entete.tete=j;
        break;
    case 2:
        Fichier->entete.queue=j;
        break;
    case 3:
        Fichier->entete.pos_libre=j;
        break;
    case 4:
        Fichier->entete.nbr_supp=j;
        break;
    case 5:
        Fichier->entete.nbr_ins=j;
        break;
    }
}
/**********************************************************************/


/********************************* ECRIREDIR *****************************/
/*          Ecrire  Buff directement dans Le Bloc 'i' du Fichier       */
void EcrirDir(LnOVC *Fichier,int i,BUFFER *buff)
{
    fseek(Fichier->F,sizeof(TEntete)+sizeof(Tbloc)*(i-1),SEEK_SET);
    fwrite(buff,sizeof(BUFFER),1,Fichier->F);
    rewind (Fichier->F);
}
/**********************************************************************/


/********************************* LIREDIR *****************************/
/*          Lire Le Bloc 'i' directement du Fichier Dans Buff         */
void LireDir (LnOVC *Fichier,int i, BUFFER *buff)
{
    fseek(Fichier->F,sizeof(TEntete)+sizeof(Tbloc)*(i-1),SEEK_SET);
    fread(buff,sizeof(BUFFER),1,Fichier->F);
    rewind (Fichier->F);
}
/**********************************************************************/


/********************************* OUVRIR *****************************/
/*      Ouvrir un Fichier et intialiser/charger l'entete dans MC      */
LnOVC *ouvrir(char nomfichier[],char mode)
{
    LnOVC *Fichier=malloc(sizeof(LnOVC));
    if (mode == 'a' || mode == 'A')
    {
        Fichier->F=fopen(nomfichier,"rb+");
        if (Fichier->F == NULL )
        {
            printf("\nERREUR! IMPOSSIBLE D'OUVRIR LE FICHIER.");
            exit(1);
        }
        fread(&(Fichier->entete),sizeof(TEntete),1,Fichier->F); // charger l'entete dans la MC
    }
    else
    {
        Fichier->F=fopen(nomfichier,"wb+");
        if (Fichier->F == NULL )
        {
            printf("\nERREUR! IMPOSSIBLE D'OUVRIR LE FICHIER.");
            exit(1);
        }
        Aff_Entete(Fichier,1,0); // initialiser l'entete
        Aff_Entete(Fichier,2,0);
        Aff_Entete(Fichier,3,0);
        Aff_Entete(Fichier,4,0);
        Aff_Entete(Fichier,5,0);
        fwrite(&(Fichier->entete),sizeof(TEntete),1,Fichier->F); // Ecrire l'enete dans le fichier
    }
    return (Fichier);
}
/**********************************************************************/


/********************************* ALLOC_BLOC *****************************/
/*                       Allouer un nouveau Bloc                         */
int Alloc_Bloc(LnOVC *Fichier)
{
    return (Fichier->entete.queue +1 );
}
/**********************************************************************/


/********************************* FERMER *****************************/
/*    Fermer le Fichier en sauvgardant  l'entete au début de fichier  */
void Fermer (LnOVC *Fichier)
{
    rewind (Fichier->F);
    fwrite(&(Fichier->entete),sizeof(TEntete),1,Fichier->F); // sauvgarder l'entete
    fclose(Fichier->F);
    free(Fichier);
}
/**********************************************************************/
