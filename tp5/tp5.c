#include <stdio.h>
#include "tp5.h"

void afficherMenu() {

    printf("=============================\n");
    printf("Suivi de consommation\n");
    printf("=============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Sauvegarde et quitter\n");
}


int lireChoix() {
    int choix;
    printf("Votre choix : ");
    scanf("%d", &choix);
    return choix;
}


void initialiser(int tab[7]) {
    for (int i = 0; i < 7; i++) 
    {
        tab[i] = 0;
    }
}


void ajouterConsommation(int tab_conso[7]) {

    int choix_conso;
    int quantite;

    printf("Quelle categorie voulez-vous modifier ?\n");
    printf("1. Eau 💧\n2. Cafe ☕\n3. Bonbons 🍬\n4. Gateau 🍰\n5. Legumes 🥦\n6. Fruits 🍎\n7. Proteines 🍗\n");

    printf("Votre choix ? : ");
    scanf("%d", &choix_conso);

    if (choix_conso < 1 || choix_conso > 7) 
    {
        printf("Choix invalide.\n");
        return;
    }

    printf("Combien d unites ajouter ? : ");
    scanf("%d", &quantite);

    tab_conso[choix_conso - 1] += quantite;

    printf("Consommation mise a jour\n");
}


void afficheResume(int tab_conso[7]) {

    printf("========== Resume du jour ==========\n");
    printf("Eau       : %d\n", tab_conso[0]);
    printf("Cafe      : %d\n", tab_conso[1]);
    printf("Bonbons   : %d\n", tab_conso[2]);
    printf("Gateau    : %d\n", tab_conso[3]);
    printf("Legumes   : %d\n", tab_conso[4]);
    printf("Fruits    : %d\n", tab_conso[5]);
    printf("Proteines : %d\n", tab_conso[6]);
    printf("====================================\n");
}

int charger(int tab[7]) {

    FILE *f = fopen("consommation.txt", "r");
    if (f == NULL) 
    {
        return 0;
    }

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

int sauvegarder(int tab[7]) {

    FILE *f = fopen("consommation.txt", "w");
    if (f == NULL) 
    {
        return 0;
    }

    for (int i = 0; i < 7; i++) 
    {
        fprintf(f, "%d ", tab[i]);
    }

    fprintf(f, "\n");
    fclose(f);
    return 1;
}
