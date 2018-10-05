#include "Modèle_LnOVC.h"

/*****============================== Lire une chaine de caracteres ======================*****/
int lire(char *chaine, int longueur);

/*****============================== Inialiser le Fichier LnOVC ======================*****/
void Charg_Initial (char Nomfichier[]);

/*****============================== Recupere un mot du Fichier ======================*****/
void Recup_Mot (LnOVC *Fichier,int *i,int *j,BUFFER *buf1, int nbc , char Mot []);

/*****=========== Affiche les Donnes d'un Fichier avec leurs parametres ============*****/
void Affich_fichier (char Nomfichier [],int *ligne);

/*****============================== Rechercher une cle ===========================*****/
void Rechercher (char Nomfich [20],char cle [], int *i,int *j,int *Trouv);

/*****=========================== Inserer une donnée dans le Fichier ================*****/
void Insertion_LnOVC(char Nomfichier[],char cle[],char *info,int taille) ;

/*****====================== Supprimer une donnée dans le Fichier ===================*****/
void Supprimer (char Nomfichier [], char cle [],int *ligne) ;

/*****==================== Re-Inserer une donnée dans le Fichier ====================*****/
void Re_Insert (char Nomfichier [], char Enreg [], int taille );

/*****============================== Re-organiser le Fichier ======================*****/
void Re_organisation (char fichierIN []  , char fichierOUT []);
