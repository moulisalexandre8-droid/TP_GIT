#include <stdio.h>
#include "tp5.h"

void afficherMenu(){

    printf("=============================\n");
    printf("Suivi de consommation\n");
    printf("=============================\n");
    printf("1. Ajouter une consommation\n2. Afficher le resume du jour\n3. Sauvegarde et quitter\n");



}


int lireChoix(){
    
    int choix;
    printf("Votre choix : ");
    scanf("%d", &choix);
    return choix;

}


void initialiser(char tab[7]){

    for(int i = 0; i<7; i++){

    }
    
}
