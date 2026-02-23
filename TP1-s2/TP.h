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

void lecture_donnee(int *num_rang, int *num_tab, char *nom_fichier, Eleve liste[50][50]);

void creation_salle();

void placement();

void affichage();

void place_correspondante(Place salle[], int nb_rang, int nb_tab);

void placement_simple(Eleve eleves[], int nb_eleves, Place salle[], int nb_places);

void placement_avance(Eleve eleves[], int nb_eleves, Place salle[], int nb_rang, int nb_tab);

void affichage_plan(Place salle[], int nb_rang, int nb_tab);




#endif 


