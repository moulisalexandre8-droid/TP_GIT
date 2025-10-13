#include <stdio.h>

//exo 1
int main() {

    int secondes = 0;
    scanf("%d", &secondes);

    int minutes = secondes / 60;
    int heures = minutes / 60;

    printf("%d secondes = %d minutes et %d heures\n", secondes, minutes, heures);

    return 0;
}