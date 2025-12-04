#include <stdio.h>
#include "tp5.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    int tab[7];

    if (charger(tab) == 0) 
    {
        printf("Aucune sauvegarde trouvee.\n");
        initialiser(tab);
    }

    int quitter = 0;

    while (quitter == 0) {
        afficherMenu();
        int choix = lireChoix();

        if (choix == 1) {
            ajouterConsommation(tab);
        }
        else if (choix == 2) {
            afficheResume(tab);
        }
        else if (choix == 3) {
            sauvegarder(tab);
            quitter = 1;
        }
        else {
            printf("Choix invalide !\n");
        }
    }

    return 0;
}