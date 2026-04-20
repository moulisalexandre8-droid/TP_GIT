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

typedef struct cellule {
    Medicament med;
    struct cellule* suivant;
} Cellule;

void saisir(Medicament tab[], int n);

int comparerDate(Date d1, Date d2);

void triBulles(Medicament tab[], int n);

int rechercheDicho(Medicament tab[], int n, char nom[]);

Medicament plusCher(Medicament tab[], int n);

float tauxVente(Medicament tab[], int n);

Cellule* ajouter(Cellule* tete, Medicament m);

void trierListe(Cellule* tete);


#endif