#include <stdio.h>


void afficherMenu()
{
    printf("==== GESTION DES NOTES ====\n");
    printf("1.Saisir le nombre d eleve\n");
    printf("2.Saisir les notes des eleves\n");
    printf("3.Afficher toutes les notes\n");
    printf("4.Afficher la moyenne d un eleve\n");
    printf("5.Afficher la moyenne general\n");
    printf("6.Afficher la meilleure note de chaque controle\n");
    printf("0.Quitter\n");
    return;


}

int lireChoix(){
    int choix;
    printf("Choisissez ce que vous voulez voir");
    scanf("%d", &choix);
    return choix;
}

int saisirNombreEleves(){
    int nombre;
    printf("Donnez moi le nombre d eleve compris entre 1 et 30");
    scanf("%d", &nombre);
    if(nombre<1 || nombre>30){
        saisirNombreEleves();
    }
    else{
        return nombre;
    }
}


int main(){

    afficherMenu();
    int choix = lireChoix();
    int nombre = saisirNombreEleves();
    printf("Votre choix :%d\n", choix);
    printf("votre choix :%d", nombre);





    return 0;
}