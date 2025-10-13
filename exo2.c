#include <stdio.h>
#include <math.h>

//exo 2
int main() {
    float M = 0; //total
    int C; //montant du pret
    int n; //nombre dannee
    int t; //taux d'interet annuel
    printf("Entrez le montant du pret, le nombre d'annees et le taux d'interet annuel : ");
    scanf("%d", &C);
    scanf("%d", &n);
    scanf("%d", &t);
    float var1 = (C*(t/12.0));
    float var2 = (1+t/12.0);
    float var_carre = 1-pow(var2, -n*12);
    M = (float)var1/(float)var_carre;
    printf("Le montant de la mensualite est de : %f", M);


    return 0;
}