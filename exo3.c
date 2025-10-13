#include <stdio.h>
#include <string.h>

int main() {
    char mot[50] = "Bonjour";
    int len = strlen(mot);
    char lettre;
    int faute = 0;
    int lettre_trouvee = 0;
    int found[50] = {0}; /* marque les positions déjà trouvées */

    printf("Cherche une lettre du mot ");
    if (scanf(" %c", &lettre) != 1) return 0;
    // du coup jai fini lexo avec de l'aide parce que je navais plus aucune idee
    while (faute < 7 && lettre_trouvee < len) {
        int trouve = 0;
        for (int i = 0; i < len; i++) {
            if (mot[i] == lettre && !found[i]) {
                found[i] = 1;
                lettre_trouvee++;
                trouve = 1;
            }
        }

        if (trouve) {
            printf("Bien joue !\n");
        } else {
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
                printf("Tu as perdu !-------\n | |\n | O\n | /|\\\n | / \\\n+ |\n-------\n");
                break;
            }
        }

        if (lettre_trouvee == len){
            printf("Bravo tu as gagne ! Le mot etait : %s\n", mot);
            break;
        }

        printf("Cherche une lettre du mot ");
        if (scanf(" %c", &lettre) != 1) break;
    }
    return 0;
}