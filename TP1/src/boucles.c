#include <stdio.h>

int main() {
    int compteur = 10;

    if (compteur >= 4);
    {
        for (int k = 0; k < compteur ; k++)
        {
            for (int p=0; p<=k; p++)
            {
                if(p==0){
                    printf("*");
                }
                else if (k==compteur-1){
                    printf("*");
                }
                else if (p==k)
                {
                    printf("*");
                }
                else{
                    printf("#");
                }
            }
        printf("\n");
        }
        
    }
    
}