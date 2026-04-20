#include "tri_bulle.h"


int main() {
    int N = 80;
    Medicament tab[80];

    saisir(tab, N);
    triBulles(tab, N);

    printf("\nTrie par date de peremption :\n");

    for(int i = 0; i < N; i++) {
        printf("%s - %02d/%02d/%d\n",
               tab[i].nom,
               tab[i].peremption.jour,
               tab[i].peremption.mois,
               tab[i].peremption.annee);
    }

    Medicament m = plusCher(tab, N);

    printf("\nMedicament le plus cher : %s (%.2f $)\n", m.nom, m.prix);

    float taux = tauxVente(tab, N);

    printf("Taux de vente : %.2f %%\n", taux * 100);

    Cellule* liste = NULL;

    for(int i = 0; i < N; i++) {
        liste = ajouter(liste, tab[i]);
    }

    trierListe(liste);

    printf("\nListe triee par code :\n");
    afficherListe(liste);

    return 0;
}