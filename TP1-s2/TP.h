#ifndef TP_H
#define TP_H


typedef struct 
{
    char prenom[50];
    char nom[50];
    
} Eleve;

typedef struct 
{
    int num_rang;
    int num_tab;
    int occupe;
} Place;

void lecture_donnee(num_rang, num_tab, nom_fichier){};

void creation_salle();

void placement();

void affichage();









#endif 


