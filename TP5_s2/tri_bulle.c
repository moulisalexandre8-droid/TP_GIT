#include "tri_bulle.h"

void saisir(Medicament tab[], int n){

    for(int i = 0; i < n; i++) {
        printf("\nMedicament %d\n", i+1);

        printf("Nom : ");
        scanf("%s", tab[i].nom);

        printf("Code : ");
        scanf("%d", &tab[i].code);

        printf("Fabrication (jj mm aaaa) : ");
        scanf("%d %d %d",
              &tab[i].fabrication.jour,
              &tab[i].fabrication.mois,
              &tab[i].fabrication.annee);

        printf("Peremption (jj mm aaaa) : ");
        scanf("%d %d %d",
              &tab[i].peremption.jour,
              &tab[i].peremption.mois,
              &tab[i].peremption.annee);

        printf("Prix : ");
        scanf("%f", &tab[i].prix);

        printf("Nb vendus : ");
        scanf("%d", &tab[i].nb_vendus);

        printf("Stock : ");
        scanf("%d", &tab[i].stock);
    }
}

int comparerDate(Date d1, Date d2) {
    if(d1.annee != d2.annee)
        return d1.annee - d2.annee;

    if(d1.mois != d2.mois)
        return d1.mois - d2.mois;

    return d1.jour - d2.jour;
}


void triBulles(Medicament tab[], int n) {
    Medicament temp;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(comparerDate(tab[j].peremption, tab[j+1].peremption) > 0) {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

int rechercheDicho(Medicament tab[], int n, char nom[]) {
    int debut = 0;
    int fin = n - 1;
    int mil;
    int trouve = 0;

    while (!trouve && debut <= fin) {
        mil = (debut + fin) / 2;

        int cmp = strcmp(nom, tab[mil].nom);

        if (cmp == 0) {
            trouve = 1;
        }
        else if (cmp > 0) {
            debut = mil + 1;
        }
        else {
            fin = mil - 1;
        }
    }

    if (trouve)
        return mil;
    else
        return -1;
}

Medicament plusCher(Medicament tab[], int n) {
    Medicament max = tab[0];

    for(int i = 1; i < n; i++) {
        if(tab[i].prix > max.prix) {
            max = tab[i];
        }
    }

    return max;
}