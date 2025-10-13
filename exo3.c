#include <stdio.h>
#include <string.h>

int main() {
    char mot[50] = "Bonjour";
    int len = strlen(mot);
    char lettre;
    int faute = 0;
    int lettre_trouvee = 0;

    printf("Cherche une lettre du mot ");
    scanf(" %c", &lettre);

    for(int i = 0; i < len-1; i++){
        if (mot[i] == lettre){
            printf("Bien joue !");
            lettre_trouvee++;

        }
        else{
            faute++;
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

            if (len == lettre_trouvee){
                printf("Bravo tu as gagne ! Le mot etait : %s\n", mot);
                break;
            }
            
        }
    printf("Cherche une lettre du mot ");
    scanf(" %c", &lettre);
    }
    return 0;
}