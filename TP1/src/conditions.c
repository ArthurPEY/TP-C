#include <stdio.h>

int main(){

    int i = 0;

    for(i=0;i<1001;i++){
        if(((!(i%2))&&(!(i%15)))){
            printf("%i est divisible par 2 et 15\n",i);
        }
        if(((!(i%103))||(!(i%107)))){
            printf("%i est divisible par 103 ou 107\n",i);
        }
        if(((!(i%7))||(!(i%5)))&&(i%3)){
            printf("%i est divisible par 7 ou 5, mais pas 3\n",i);
        }
    }
    return 0;
}