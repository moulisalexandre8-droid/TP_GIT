#include <stdio.h>
#include "tp5.h"


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

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
    
    
    



    
    return 0;
}