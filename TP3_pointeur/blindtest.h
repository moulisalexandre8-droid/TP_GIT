#ifndef BLINDTEST_H
#define BLINDTEST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

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




int load_songs(char * filename, Son *song);

void melanger(Son *song, int count);

void gestion_joueur();

void charger_scores();

void update_scores();

void sauver_scores();

void play_song_excerpt_at(const char *filename, int start, int seconds);

int string_equals_normalized(const char *a, const char *b);

void normalize_string(char *dest, const char *src);

void trim_newline(char *s);

#endif