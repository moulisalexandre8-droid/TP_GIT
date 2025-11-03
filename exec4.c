#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++; // il n'y avait pas de compteur pour i ce qui faisait une boucle infinie
    }
    return 0;
}
