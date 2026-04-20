#ifndef TRI_BULLE.H
#define TRI_BULLE.H

#include <stdio.h>
#include <string.h>

typedef struct {
    int jour, mois, annee;
} Date;

typedef struct {
    char nom[50];
    int code;
    Date fabrication;
    Date peremption;
    float prix;
    int nb_vendus;
    int stock;
} Medicament;

void saisir(Medicament tab[], int n);

int comparerDate(Date d1, Date d2);

void triBulles(Medicament tab[], int n);

#endif