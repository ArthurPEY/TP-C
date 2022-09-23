/*
Auteurs : Arthur PEY & Pierre-Antoine CHIRON
Effectue des calculs avec differents opérateurs en utlisant la méthode de switch case
*/

#include <stdio.h>

int main(){
    int num1 = 10; // Initialisation des variables
    int num2 = 20;
    char op = '7';

    switch(op){ // Cases de calculs
        case '+':printf("num1+num2 : %i\n",num1+num2); break;
        case '-':printf("num1-num2 : %i\n",num1-num2); break;
        case '*':printf("num1*num2 : %i\n",num1*num2); break;
        case '/':printf("num1/num2 : %i\n",(float)num1/(float)num2); break;
        case '%':printf("num1%%num2 : %i\n",num1%num2); break;
        case '&':printf("num1&num2 : %i\n",num1&num2); break;
        case '|':printf("num1|num2 : %i\n",num1|num2); break;
        case '~':printf("~num1 : %i\n",~num1);
        printf("~num2: %i\n",~num2);
        break;

        default: printf("Saisissez une opération !\n"); // Case de sécurité
    }
}