/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Affiche la taille en octets de chaque type de variable
*/

#include <stdio.h>

int main(){
    printf("\n %d octets pour variable de type char ", sizeof(char));
    printf("\n %d octets pour variable de type unsigned char ", sizeof(unsigned char));
    printf("\n %d octets pour variable de type unsigned short_int ", sizeof(unsigned short int));
    printf("\n %d octets pour variable de type short_int ", sizeof(short int));
    printf("\n %d octets pour variable de type int ", sizeof(int));
    printf("\n %d octets pour variable de type unsigned int ", sizeof(unsigned int));
    printf("\n %d octets pour variable de type long int ", sizeof(long int));
    printf("\n %d octets pour variable de type unsigned long int ", sizeof(unsigned long int));
    printf("\n %d octets pour variable de type long long int ", sizeof(long long int));
    printf("\n %d octets pour variable de type unsigned long long int ", sizeof(unsigned long long int));
    printf("\n %d octets pour variable de type float ", sizeof(float));
    printf("\n %d octets pour variable de type double ", sizeof(double));
    printf("\n %d octets pour variable de type long double ", sizeof(long double));

    return 0;
}