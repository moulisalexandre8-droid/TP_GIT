#include <stdio.h>

int main() {
    int t[3] = {10, 20, 30};
    int i = 0; // indice valide
    printf("%d\n", t[i]); 
    return 0; //Le probleme venait de l'utilisation d'un indice negatif t[-1], ce qui accede a une zone memoire en dehors du tableau. En C, cela peut provoquer un comportement imprevisible car le langage ne verifie pas les limites des tableaux a l'execution

}
