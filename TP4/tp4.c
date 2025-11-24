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

void saisirNote(int nombreEleve, float tab[30][3]){
    float note;
    for(int i = 0; i<nombreEleve; i++){
        for(int j = 0; j <3; j++){
            printf("Entrez la note :\n");
            scanf("%f", &note);
            if(note<0 || note>20){
                printf("La note doit etre comprise entre 0 et 20\n");
                scanf("%f", &note);
            }
            else{
                tab[i][j] = note ;

            }
        }
    printf("Eleve %d:\nNote du controle 1 (0 a 20) :%f\nNote du controle 2 (0 a 20) :%f\nNote du controle 3 (0 a 20) :%f",i, tab[i][0], tab[i][1], tab[i][2]);
    
    }
    return;

}

void afficherNote(int nombreEleve, float tab[30][3]){
    printf("Tableau des notes\nEleve  C1  C2  C3\n");
    for(int i = 0; i<nombreEleve; i++){
        printf("%5d", i + 1);
        for(int j = 0; j <3; j++){
            printf(" %4.1f", tab[i][j]);
        }
        printf("\n");
    return;
    }

}

float calculMoyenneEleve(float tab[30][3]){
    int indice;
    int resultat;
    printf("Donnez l'indice de l eleve");
    scanf("%d", &indice);
    for(int i = 0; i<3; i++){
        resultat += tab[indice][i];
    }
    resultat = resultat/3;
    return resultat;

}








int main(){

    afficherMenu();
    float tab[30][3];
    int choix = lireChoix();
    int nombre = saisirNombreEleves();
    float moyenne;
    printf("Votre choix :%d\n", choix);
    printf("votre choix :%d", nombre);
    saisirNote(nombre, tab);
    afficherNote(nombre, tab);
    moyenne = calculMoyenneEleve(tab);
    printf("%f", moyenne);

    return 0;
}