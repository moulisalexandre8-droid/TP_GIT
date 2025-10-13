#include <stdio.h>

//exo 2
int main() {
    int M = 0; //total
    int C; //montant du pret
    int n; //nombre dannee
    int t; //taux d'interet annuel
    printf("Entrez le montant du pret, le nombre d'annees et le taux d'interet annuel : ");
    scanf("%d %d %d", &C, &n, &t);
    M = (C*(t/12))/(1-(1+t/12)^-n*12);
    printf("Le montant de la mensuialité est de : %d", M);


    return 0;
}