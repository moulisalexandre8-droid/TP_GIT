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


void initialiser(int tab[7]){

    for(int i = 0; i<7; i++){
        tab[i] = 5;
    }
    
}

void ajouterConsommation(int tab_conso[7]){
    int choix_conso;
    int quantite;
    printf("Quelle categorie voulez vous modifier ?\n1. Eau 💧\n2. Cafe ☕\n3. Bonbons 🍬\n4. Gateau 🍰\n5. Legumes 🥦\n6. Fruits 🍎\n7. Proteines 🍗\n");
    printf("Votre choix ? : ");
    scanf("%d", &choix_conso);
    printf("\nCombien d unites ajouter ? : ");
    scanf("%d", &quantite);
    initialiser(tab_conso);
    tab_conso[choix_conso] = quantite;
    printf("Consommation mise a jour");

}
