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
        tab[i] = 0;
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
    tab_conso[choix_conso] = quantite;
    printf("Consommation mise a jour");

}

void afficheResume(int tab_conso[7]){
    printf("========== Resume du jour ==========\n Eau      : %d\nCafe     : %d\nBonbons  : %d\nGateau   : %d\nLegumes  : %d\nFruits   : %d\nProteines: %d\n==============================", tab_conso[0], tab_conso[1], tab_conso[2], tab_conso[3], tab_conso[4], tab_conso[5], tab_conso[6]);

}

int charger(int tab[7]){

    FILE * f = fopen("consommation.txt", "r");

    for (int i = 0; i < 7; i++) 
    {
        if (fscanf(f, "%d", &tab[i]) != 1)
        {
            fclose(f);
            return 0;
        }
    }
    fclose(f);
    return 1;

}

int sauvegarder(int tab[7]){

    FILE * f = fopen("consommation.txt", "w");

    for (int i = 0; i < 7; i++) 
    {
    fprintf(f, "%d ", tab[i]);
    }

    fprintf(f, "\n");
    fclose(f);

    return 1;



}
