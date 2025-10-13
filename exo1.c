#include <stdio.h>

//exo 2
int main() {

    int secondes;
    scanf("%d", &secondes);

    int heures = secondes / 3600;
    int minutes = (secondes % 3600) / 60;
    int sec = secondes % 60;
    printf("%d secondes = %d minutes et %d heures\n et %d secondes",secondes, minutes, heures, sec);

    return 0;
}