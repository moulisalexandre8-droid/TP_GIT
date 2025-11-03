#include <stdio.h>

int main() {
    int tab[10]; //ici on avait defini un tableau de taille 5 ce qui est netait pas suffisant pour mettre les 10 elements demandes plus bas
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
