#include <stdio.h>
#include <math.h>

//exo 2
int main() {
    float M = 0; //total
    int C; //montant du pret
    int n; //nombre dannee
    int t; //taux d'interet annuel
    printf("Entrez le montant du pret, le nombre d'annees et le taux d'interet annuel : ");
    scanf("%d %d %d", &C, &n, &t);
    int var1 = (C*(t/12));
    int var2 = (1-(1+t/12)^-n*12);
    int var_carre = pow(var2, -n*12);
    M = var1/var_carre;
    printf("Le montant de la mensuialité est de : %.2f", M);


    return 0;
}