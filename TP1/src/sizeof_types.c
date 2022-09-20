#include <stdio.h>

int main() {
    printf("taille d'un char signé:%i \n",sizeof(signed char));
    printf("taille d'un char non signé:%i \n",sizeof(unsigned char));
    printf("taille d'un short signé:%i \n",sizeof(signed short));
    printf("taille d'un short non signé:%i \n",sizeof(unsigned short));
    printf("taille d'un int signé:%i \n",sizeof(signed int));
    printf("taille d'un int signé non signé:%i \n",sizeof(unsigned int));
    printf("taille d'un long int signé:%i \n",sizeof(signed long int));
    printf("taille d'un long int non signé:%i \n",sizeof(unsigned long int));
    printf("taille d'un long long int :%i \n",sizeof(signed long long int));
    printf("taille d'un long long int non signé:%i \n",sizeof(unsigned long long int));
    printf("taille d'un float:%i \n",sizeof(float));
    printf("taille d'un double:%i \n",sizeof(double));
    printf("taille d'un long double:%i \n",sizeof(long double));

    return 0;

}