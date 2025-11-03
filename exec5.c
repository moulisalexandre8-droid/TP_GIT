#include <stdio.h>

int main() {
    char s[5];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    s[4] = '\0'; // on met le caractere de fin de chaine pour eviter les depassements de memoire
    printf("%s\n", s); 
    return 0;
} //jai limpression que ce code marche tres bien, il renvoie bien le mot choisis danns le code et le debogage renvoie un code 0 donc sans erreur
