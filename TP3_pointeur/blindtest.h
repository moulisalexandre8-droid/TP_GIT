#ifndef BLINDTEST_H
#define BLINDTEST_H


typedef struct Son
{
    char tab[50];

}Son;

typedef struct Joueur
{
    char nom[50];
    int score;
    struct Joueur * suivant;
}Joueur;





void lire_et_melange();

void gestion_joueur();

void charger_scores();

void update_scores();

void sauver_scores();

#endif