/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Affiche un triangle de la taille de la variable compteur
Taille minimum de 5
*/

#include <stdio.h>

int main() {
    int compteur = 18;
    if (compteur >= 4) // Sécurité
    {
        for (int k = 0; k < compteur ; k++) // Boucle sur le nombre d'étage
        {
            for (int p=0; p<=k; p++) // Boucle sur le nombre d'éléments par lignes
            {
                if(p==0){ // Etoile de gauche de l'étage
                    printf("*");
                }
                else if (k==compteur-1){ // Etoile de droite de l'étage
                    printf("*");
                }
                else if (p==k) // Denier étage
                {
                    printf("*");
                }
                else{ // Tout les autres cas -> affichage d'un croisillon
                    printf("#");
                }
            }
        printf("\n"); // Fin de l'étage -> retour à la ligne
        }
    }
    else{
        printf("Saisissez une valeur supèrieur à 5\n"); // Sécurité
    }
    return 0;
}