#include <stdio.h>
#include "tp5.h"

void afficherMenu(){

    printf("=============================\n");
    printf("Suivi de consommation");
    printf("=============================\n");
    printf("1. Ajouter une consommation\n2. Afficher le resume du jour\n3. Sauvegarde et quitter\n");
    return;



}


int lireChoix(){
    
    int choix;
    printf("Votre choix : ");
    scanf("%d", &choix);
    return choix;

}

