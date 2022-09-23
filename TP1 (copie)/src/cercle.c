#include <stdio.h>


int main(){
    float rayon = 4;
    float aire = 0;
    float perimetre = 0;
    float pi = 3.141592;

    perimetre = 2*pi*rayon;
    aire = pi*rayon*rayon;

    printf("Périmètre du cercle: %f\n",perimetre);
    printf("Aire du cercle: %f\n",aire);
}