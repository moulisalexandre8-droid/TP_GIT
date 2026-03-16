#ifndef BLINDTEST_H
#define BLINDTEST_H


typedef struct Son
{
    char nom_fichier[50];
    char titre[50];
    char artiste[50];

}Son;

typedef struct Joueur
{
    char nom[50];
    int score;
}Joueur;

typedef struct Joueur_liste
{
    char nom[50];
    int meilleur_score;
    struct Joueur * suivant;

}Joueur_liste;




void  load_songs();

void melanger();

void gestion_joueur();

void charger_scores();

void update_scores();

void sauver_scores();

#endif