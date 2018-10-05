#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define b 45  // taille du bloc, doit etre > à (20+taille_cle) qui est la taille d'enregistrement utilise pour le chargement initiale
#define Taille_Cle 20 //la taille de cle
    /** SI VOUS VOULEZ CHANGEZ LA TAILLE VOUS DEVEZ CHANGEZ LA TAILLE DE LA DONNEE DONNEE EN CHARGEMENT INIAL **/
#define u 50  //Pourcentage de reorganisation

 /**========================================================================================**/
 /**                            STRUCTURE D UN FICHIER LnOVC                                **/
/**========================================================================================**/

/* Structure de Bloc  */
typedef struct Tbloc{
          char Tab[b];
          int suiv;
          }Tbloc;


/* Structure de l'Entete */
typedef struct TEntete{
         int tete;   //entier_1 : l'@ du 1er bloc
         int queue;   //Entier_2 : @ du dernier bloc
         int pos_libre;  //entier_3 : la 1ere positionlibre dans le dernier bloc
         int nbr_supp;   //entier_4: nombre de caractere supprime logiquement
         int nbr_ins;    //entier_5 : nombre des caractere inseres
         }TEntete;


/* Structure de Fichier */
typedef struct LnOVC{
          FILE *F;
          TEntete entete;
           }LnOVC;


/*Type de buffer */
typedef Tbloc BUFFER;


/*  variables globaux */
BUFFER buf1,buf2;
LnOVC *Fichier,*Fichier2;

/********************************* ENTETE *****************************/
int Entete(LnOVC *Fichier,int i);
/********************************* AFF_ENTETE *****************************/
void Aff_Entete (LnOVC *Fichier,int i, int j);
/********************************* ECRIREDIR *****************************/
void EcrirDir(LnOVC *Fichier,int i,BUFFER *buff);
/********************************* LIREDIR *****************************/
void LireDir (LnOVC *Fichier,int i, BUFFER *buff);
/********************************* OUVRIR *****************************/
LnOVC *ouvrir(char nomfichier[],char mode);
/********************************* ALLOC_BLOC *****************************/
int Alloc_Bloc(LnOVC *Fichier);
/********************************* FERMER *****************************/
void Fermer (LnOVC *Fichier);
