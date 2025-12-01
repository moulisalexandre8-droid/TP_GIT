#include <stdio.h>
#include "tp5.h"

int main()
{
    int tab[7];
    afficherMenu();
    int choix = lireChoix();
    if (choix == 3)
    {
        afficherMenu();
        choix = lireChoix();
    }
    else if(choix == 1){
        ajouterConsommation(tab[7]);
    }
    else if (choix == 2)
    {
        
    }
    
    
    

}