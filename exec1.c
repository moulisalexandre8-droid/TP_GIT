#include <stdio.h>

int main() {
    int a = 2;
    int b = 0;
    if (b == 0) {
        printf("Erreur: division par zéro\n");
        return 1; // quitter avec un code d'erreur
    }
    else {
        int c = a / b;  // division sûre    
        printf("%d\n", c);
    }
        
    return 0;
}
// lerreur ici est quon essaye de faire une division par 0 ce qui est impossible