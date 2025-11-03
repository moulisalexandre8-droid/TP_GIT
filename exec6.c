#include <stdio.h>

int main() {
    char nom[40]; //ici il est preferable de mettre plus de places pour stocker un nom car un caractere aditionnel peut se glicer dans notre chaine
    printf("Nom ? ");
    scanf("%s", nom); 
    char c = 'g';

    printf("Bonjour %s\n", nom);
    return 0;
}
