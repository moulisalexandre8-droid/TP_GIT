#ifndef TP5
#define TP5
#include <windows.h>
#include <locale.h>

void afficherMenu();
int lireChoix();
void initialiser(int tab[7]);
void ajouterConsommation(int tab_conso[7]);
void afficheResume(int tab_conso[7]);
int charger(int tab[7]);
int sauvegarder(int tab[7]);
void afficherObjectifsEtScore(int tab[7], int objectifs[7]);
int calculerScoreSante(int tab[7], int objectifs[7]);


#endif