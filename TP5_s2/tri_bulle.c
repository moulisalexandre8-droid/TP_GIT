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

int comparerDate(Date d1, Date d2){}


void triBulles(Medicament tab[], int n){}
