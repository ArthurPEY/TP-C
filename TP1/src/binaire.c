/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Ce programme renvoie la valeur en binaire de la variable "var"
Limité à 64 bits
*/
#include <stdio.h>

int main(){
    long long int var = 132; // Initialisation de la varible en décimale
    long long int varsave = var; // Sauvegarde de la variable
    int nbbit = 0;
    int bintemp[64]; // Initilisation de la list contenant les bits
    while((var != 0)&&(var !=1)){ // Condition de fin
        if (var%2==0){ // Test de divisibilité
            bintemp[nbbit]=0;
        }
        else{
            bintemp[nbbit]=1;
        }
        var=var/2; // Actualisation de la variable
        nbbit += 1;
    }

    if (var%2==0){
        bintemp[nbbit]=0;
    }
    else{
        bintemp[nbbit]=1;
    }
    printf("%lld en binaire codé sur %i bits : ",varsave,nbbit);
    for (int i=nbbit;i>=0;i--){ // Affichage du nombre en binaire
        printf("%d",bintemp[i]);
    }
    printf("\n");
    return 0;
}