#include <stdio.h>

int main() {
    float distance_km = 100;
    float vitesse_kmh = 50;
    float temps = distance_km / vitesse_kmh; 
    int minutes = (int)(temps * 60);
    printf("minutes = %d\n", minutes); 
    return 0;
} //le probleme de ce probleme est qu'on faisait une division entiere et non en float ce qui avait pour faiblesse de fausser le calcul des minutes en etant peu précis
