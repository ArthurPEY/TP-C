/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Programme affichant une variable de chaque type possible
*/

#include <stdio.h>

int main(){
    char lettre = 'a';  //Initialisation des variables de chaque type
    unsigned char b = 98;
    short petit = 2;
    unsigned short petit2 = 3;
    int chiffre = 12;
    unsigned int chiffre2 = 129;
    long int longchiffre = 124365;
    unsigned long int longchiffre2 = 12431165;
    long long int longlongchiffre = 124;
    unsigned long long int longlongchiffre2 = 97457288;
    float reel = 3.14;
    double doublereel = 3.1415;
    long double reeldoublelong = 3.141592;

    printf("char : %c\n", lettre);  //Affichage de chacune des variables
    printf("unsigned char : %hhu\n", b);
    printf("short : %hd\n", petit);
    printf("unsigned short : %hu\n", petit2);
    printf("int : %i\n", chiffre);
    printf("unsigned int : %u\n", chiffre2);
    printf("long int: %ld\n", longchiffre);
    printf("unsigned long int: %lu\n", longchiffre2);
    printf("long long int: %lld\n", longlongchiffre);
    printf("unsigned long long int: %llu\n", longlongchiffre2);
    printf("float : %f\n", reel);
    printf("double : %g\n", doublereel);
    printf("long double : %Lg\n", reeldoublelong);

    return 0;
}