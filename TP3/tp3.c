//exo 1
#include <stdio.h>

int main(){

    int taille;
    int width;
    int max_height;
    char img[100][100];
    int mid;

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
            }
                
        }

    int mid = width / 2;

    for (int i = 0; i < taille; i++) {

        int left  = mid - i;   
        int right = mid + i;   
        img[i][left] = 'A';
        img[i][right] = 'A';
        for (int j = left +1; j < right; j++){
            img[i][j] = 'S';
        }
        for (int t = 0; t < mid -(taille-1); t++){
            img[taille-1][t] = '_';
        }
        for (int t = mid + (taille-1)+1; t<width; t++ ){
            img[taille-1][t] = '_';
        }
    }
    
    

int taille2 = taille;              
int left = mid - (taille - 1) + 1;     
int right = mid + (taille - 1) - 1;

for (int t = 0; t < taille - 1; t++) {  

    img[taille2][left] = '.';
    img[taille2][right] = '.';

    for (int x = left + 1; x < right; x++) {
        img[taille2][x] = 'S';
    }

    left++;
    right--;
    taille2++;
}




    for (int j = 0; j < max_height; j++) {
        for (int i = 0; i < width; i++) {
            printf("%c", img[j][i]);
        }
        printf("\n");
    }













    }

    
    return 0;
}