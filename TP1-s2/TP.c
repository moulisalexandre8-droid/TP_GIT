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


    char line[256];
    char nom[128], prenom[128];
    while (fgets(line, sizeof(line),f)){
        if (sscanf(line,"%127s %127s",prenom,nom )== 2 ){
            
        }
    }
    
    
    
    

}