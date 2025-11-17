//exo 1
#include <stdio.h>

int main(){

    int taille;
    int width;
    int max_height;
    char img[100][100];

    printf("Choisis une taille compris entre 5 et 10");
    scanf("%d", &taille);

    if( taille < 4 && taille > 11 ){
        printf("La taille doit etre comprise entre 5 et 10");
        scanf("%d", &taille);
    }
    else{
        width = taille*taille;
        max_height = 3*taille-1;
        for(int j=0; j <= width; j++){
            for(int i=0; i <= max_height; i++){
                img[j][i]= ' ';
                printf("%c", img[j][i]);
            }
                
        }
        for (int j = 0; j<= width; j++) {
            for (int i = 0; i <= max_height; i++) {
            printf("%c", img[j][i]);
        }
        printf("\n");
    }

        





    }





    return 0;
}