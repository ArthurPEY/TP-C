/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Programme calculant l'aire et le périmetre d'un cercle
*/

#include <stdio.h>

int main(){
    float rayon = 4.00; //Initialisation des variables
    float pi = 3.14;
    float aire = 0;
    float perimetre = 0;

    aire = pi*rayon*rayon; //Calcul de l'aire et du périmètre
    perimetre = 2*pi*rayon;

    printf("L'aire est : %f\n", aire);
    printf("Perimetre : %f\n", perimetre);

    return 0;
}