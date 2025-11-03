#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n", a, b); // ici on ne donnait que la variable b alors quon en demandait deux avec les deux %d, on a donc rajouter a
    return 0;
}
