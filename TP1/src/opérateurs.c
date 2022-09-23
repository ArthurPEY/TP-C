/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Programme testant toutes les opérations arithmétiques et logiques
*/

#include <stdio.h>

int main(){
    int a = 16, b = 3;

    printf("Variable a : %i\n", a);
    printf("Variable b : %i\n", b);

    printf("Opérations arithmétiques : \n");

    printf("a+b : %i\n", a+b);
    printf("a-b : %i\n", a-b);
    printf("a*b : %i\n", a*b);
    printf("a/b : %f\n", (float)a/(float)b);
    printf("a%b : %i\n", a%b);

    printf("Opérateurs logiques : \n");

    printf("a<b : %i\n", a<b);
    printf("a<=b : %i\n", a<=b);
    printf("a>b : %i\n", a>b);
    printf("a>=b : %i\n", a>=b);
    printf("a==b : %i\n", a==b);
    printf("a!=b : %i\n", a!=b);
    printf("!a : %i\n", !a);
    printf("a && b : %i\n", a&&b);
    printf("a || b : %i\n", a||b);

    return 0;
}