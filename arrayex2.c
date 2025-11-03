#include <stdio.h>

int main(){





    int numbers[] = {10,20,30,40,50,60,70}; //collection of elements of the same data type ,similar to variable but holds more than one value 

    //printf ("%d", numbers[index of element])

    int space = sizeof(numbers)/sizeof(numbers[0]); // to calulate no of elements

    printf("%d\n",space);


    for (int i = 0; i < space; i++)
    {
       printf ("%d\n", numbers[i]) ;
        /* code */
    }
    


    return 0;

}