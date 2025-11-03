#include <stdio.h>

// ici le comilateur ne dit malheureusement rien mais il devrait,
// executer pour essayer de comprendre ce qu'il se passe 
int main() {
    int tableau[5];
    int i = 12;
    for (int j = 0; j < 5; j++)
    {
        tableau[j] = 1;
    }
    printf("OK %d\n", tableau[4]);// notre tableau va de 0 a 4 et ici on essayait de prendre l'element a la position 5 donc le 6eme
    return 0;
}
