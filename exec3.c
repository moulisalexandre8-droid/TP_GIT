#include <stdio.h>

int main() {
    int x = 0; // ici x navait pas de valeur definie ce qui donne une valeure aleatoire a celui ci et fausse le calcul
    int y = x + 5;  
    printf("%d\n", y);
    return 0;
}
