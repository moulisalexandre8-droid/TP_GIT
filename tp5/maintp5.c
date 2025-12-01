#include <stdio.h>
#include "tp5.h"

int main()
{
    int tab[7];
    initialiser(tab);
    afficherMenu();
    int choix = lireChoix();
    if (choix == 3)
    {
        afficherMenu();
        choix = lireChoix();
    }
    else if(choix == 1){
        ajouterConsommation(tab);
    }
    else if (choix == 2)
    {
        afficheResume(tab);
    }
    
    
    

}