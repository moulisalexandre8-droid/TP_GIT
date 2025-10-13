#include <stdio.h>

int main() {
    char mot[50] = "Bonjour";
    char lettre;
    int faute = 0;
    printf("Cherche une lettre du mot");
    scanf(" %c", &lettre);
    for(int i = 0; mot[i]!= '\0'; i++){
        if (mot[i] == lettre){
            printf("Bien joué !");
        }
        else{
            faute = faute + 1;
            if (faute==1)
            {
                printf("C'est la première erreur !\n\n\n\n\n\n\n-------\n");
            }
            else if (faute==2){
                printf("C'est la deuxième erreur !\n |\n |\n |\n |\n |\n |\n-------\n");
            }
            else if (faute==3){
                printf("C'est la troisième erreur !-------\n | |\n |\n |\n |\n |\n-------\n");
            }
            else if (faute==4){
                printf("C'est la quatrième erreur !-------\n | |\n | O\n |\n |\n |\n-------\n");
            }   
            else if (faute==5){
                printf("C'est la cinquième erreur !-------\n | |\n | O\n | |\n |\n |\n-------\n");
            }
            else if (faute==6){
                printf("C'est la sixième erreur !-------\n | |\n | O\n | /|\\\n |\n |\n-------\n");
            }
            else if (faute==7){
                printf("Tu as perdu !-------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n");
                break;
            }
            
            }
    printf("Cherche une lettre du mot");
    scanf(" %c", &lettre);
    }
    return 0;
}