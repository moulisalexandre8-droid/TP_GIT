//exo 1
#include <stdio.h>
#include <blindtest.h>

int main(){

    srand(time(NULL));

    Son song[100];
    int count;
    int i;

    count = load_songs("songs.txt", song);
    printf("Nombre de chansons charge : %d\n", count);

    printf("Avant melange :\n");

    melanger(song, count);
    
    for(i = 0; i < count; i++){
        printf("%d - %s | %s | %s \n", i+1, song[i].nom_fichier, song[i].artiste, song[i].titre);

    }

    printf("Apres melange :\n");

    if(count == -1){

    }






    return 0;
}