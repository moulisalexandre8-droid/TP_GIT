#include <stdio.h>
#include "tp5.h"

int main()
{
    char tab[7];
    afficherMenu();
    int choix = lireChoix();
    while (choix != 3)
    {
        afficherMenu();
        choix = lireChoix();
    }

    
    

}