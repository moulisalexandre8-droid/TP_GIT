#include "TP.h"


int main()
{

    int nb_rang = 0;
    int nb_tab = 0;
    char nom_fichier[50];
    Eleve liste2D[50][50];
    lecture_donnee(&nb_rang, &nb_tab, nom_fichier, liste2D);

    Eleve eleves[2500];
    int nb_eleves = 0;
    for (int i = 0; i < nb_rang; i++) {
        for (int j = 0; j < nb_tab; j++) {
            if (liste2D[i][j].prenom[0] != '\0') {
                eleves[nb_eleves++] = liste2D[i][j];
            }
        }
    }

    Place salle[2500];
    int idx = 0;
    for (int i = 0; i < nb_rang; i++) {
        for (int j = 0; j < nb_tab; j++) {
            salle[idx].num_rang = i + 1;
            salle[idx].num_tab = j + 1;
            salle[idx].occupe = 0;
            idx++;
        }
    }

    placement_avance(eleves, nb_eleves, salle, nb_rang, nb_tab);

    affichage_plan(salle, nb_rang, nb_tab);

    return 0;
}