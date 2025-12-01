#include <stdio.h>
#include "tp5.h"

int main()
{
    char tab[7];
    int choix = lireChoix();
    afficherMenu();
    while (choix != 3)
    {
        afficherMenu();
        choix = lireChoix();
    }

    
    

}