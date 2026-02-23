#include "TP.h"
#include <stdio.h>
#include <string.h>


void lecture_donnee(int *nb_rangees, int *nb_tables, char *nom_fichier, Eleve liste[50][50]){

    FILE *f;

    printf("Donnez moi le nombre de rangees de la salle");
    scanf("%d", nb_rangees);

    printf("Donnez moi le nombre de tables par rangées");
    scanf("%d", nb_tables);

    printf("Donnez moi le nom de votre fichier");
    scanf("%s", nom_fichier);

    f = fopen(nom_fichier, "r");
    if (f == NULL) {
        printf("Erreur ouverture fichier\n");
        return;
    }

    int i = 0;
    int j = 0;
    char line[256];
    char nom[128], prenom[128];
    while (fgets(line, sizeof(line),f)){
        if (sscanf(line,"%127s %127s",prenom,nom )== 2 ){
            strncpy(liste[i][j].prenom, prenom, 49);
            liste[i][j].prenom[49] = '\0';

            strncpy(liste[i][j].nom, nom, 49);
            liste[i][j].nom[49] = '\0';

            j++;
            if (j >= *nb_tables) {
                j = 0;
                i++;
            }
            if (i >= *nb_rangees) {
                break;
            }
        }
    }

    fclose(f);
}


void place_correspondante(Place salle[], int nb_colone, int nb_ligne){
    int index = 0;
    for(int i = 0; i < nb_colone; i++ ){
        for(int j = 0; j < nb_ligne; j++){
            
            salle[index].num_rang = i + 1;
            salle[index].num_tab = j + 1;
            salle[index].occupe = 0;
        }
    }
}

    void placement_simple(Eleve eleves[], int nb_eleves, Place salle[], int nb_places) {
    int eleve_idx = 0;
    for (int i = 0; i < nb_places && eleve_idx < nb_eleves; i++) {
        if (salle[i].occupe == 0) {
            salle[i].occupe = 1;
            eleve_idx++;
        }
    }
    }

    void placement_avance(Eleve eleves[], int nb_eleves, Place salle[], int nb_rang, int nb_tab) {
        int eleve_idx = 0;
        for (int r = 0; r < nb_rang; r++) {
            int places_cette_rang = nb_tab;
            int eleves_cette_rang = nb_eleves / nb_rang + (r < (nb_eleves % nb_rang) ? 1 : 0);
            int step = places_cette_rang / eleves_cette_rang;
            if (step < 1) step = 1;
            int pos = 0;
            for (int e = 0; e < eleves_cette_rang && eleve_idx < nb_eleves; e++) {
                int idx = r * nb_tab + pos;
                salle[idx].occupe = 1;
                pos += step;
                if (pos >= nb_tab) pos = (pos % nb_tab) + 1;
                eleve_idx++;
            }
        }
    }

    void affichage_plan(Place salle[], int nb_rang, int nb_tab) {
        printf("\nPlan de la salle :\n");
        for (int r = 0; r < nb_rang; r++) {
            printf("Rangée %d : ", r+1);
            for (int t = 0; t < nb_tab; t++) {
                int idx = r * nb_tab + t;
                if (salle[idx].occupe) {
                    printf("[X] ");
                } else {
                    printf("[ ] ");
                }
            }
            printf("\n");
        }
    }
