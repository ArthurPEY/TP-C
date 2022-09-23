/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Affiche un triangle de la taille de la variable compteur
Taille minimum de 5
*/

#include <stdio.h>

int main() {
    int compteur = 10; // Initlisation des variables
    int i = 0;
    int p = 0;
    int k = 0;
    printf("*\n");
    while(i<compteur-2){
        printf("*"); // Affichage de la première étoile de la ligne
        while(p<i){
            printf("#"); // Affichage des croisillons de la ligne
            p = p +1;
        }
        printf("*\n"); // Affichage de la dernière étoile de la ligne et retour à la ligne
        i = i +1;
        p = 0;
    }

    while (k<compteur){ // Affichage de la dernière ligne
        printf("*");
        k += 1;
    }
    printf("\n");
    return 0;
}