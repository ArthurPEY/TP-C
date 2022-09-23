/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Programme donnant tout les nombres répondant aux conditions données
*/

#include <stdio.h>

int main(){
    int i = 1000; //Valeur maximale
    int k = 0;
    for (k = 0; k <= i; k++) {
        if ((k%2 == 0) && (k%15 == 0)) { //Première condition
            printf("%i est divisible par 2 et 15\n", k); 
        }
        if ((k%103 == 0) || (k%107 == 0)) { //Deuxième condition
            printf("%i est divisible par 103 ou 107\n", k); 
        }
        if (((k%5 == 0)||(k%7 == 0)) && (k%3)) { //Troisième condition
            printf("%i est divisible par 7 ou 5, mais pas 3\n", k); 
        }
    }
    return 0;
}