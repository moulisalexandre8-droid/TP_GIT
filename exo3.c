#include <stdio.h>

int main() {
    char mot[50] = "Bonjour";
    char lettre;
    int faute = 0;
    printf("Cherche une lettre du mot");
    scanf(" %c", &lettre);
    for(int i = 0; mot[i]!= '\0'; i++){
        if (mot[i] == lettre){
            printf("Bien joue !");
        }
        else{
            faute = faute + 1;
            if (faute==1)
            {
                printf("C'est la premiere erreur !\n\n\n\n\n\n\n-------\n");
            }
            else if (faute==2){
                printf("C'est la deuxieme erreur !\n |\n |\n |\n |\n |\n |\n-------\n");
            }
            else if (faute==3){
                printf("C'est la troisieme erreur !-------\n | |\n |\n |\n |\n |\n-------\n");
            }
            else if (faute==4){
                printf("C'est la quatrieme erreur !-------\n | |\n | O\n |\n |\n |\n-------\n");
            }   
            else if (faute==5){
                printf("C'est la cinquieme erreur !-------\n | |\n | O\n | |\n |\n |\n-------\n");
            }
            else if (faute==6){
                printf("C'est la sixieme erreur !-------\n | |\n | O\n | /|\\\n |\n |\n-------\n");
            }
            else if (faute==7){
                printf("Tu as perdu !-------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n");
                break;
            }
            
            }
    printf("Cherche une lettre du mot");
    scanf(" %c", &lettre);
    }
    printf("Mince c'est trop tard ! -------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n Le mot etait : %s\n", mot);
    return 0;
}