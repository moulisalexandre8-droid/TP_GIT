#include <TP.h>
#include <stdio.h>


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
        for(int j = 0; j < nb_ligne; i++){
            
            salle[index].num_rang = i + 1;
            salle[index].num_tab = j + 1;
            salle[index].occupe = 0;
        }
    }

        
    }