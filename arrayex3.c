#include <stdio.h>

int main(){





    int scores[5]= {0}; //numner of elements 5

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Score :");
        scanf("%d", &scores[i]);

        /* code */
    }
    
    
    for (int i = 0; i < 5; i++)
    {
       printf ("%d ", scores[i]) ;
        /* code */
    }
    


    return 0;

}