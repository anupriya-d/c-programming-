//array of strings 


#include <stdio.h>

int main(){


    char fruits[][10] = {"Apple","Banana","Orange"};

    int count = sizeof(fruits) / sizeof(fruits[0]);

    for (int i = 0; i < count; i++)
    {
        printf("%s\n",fruits[i]);
    }
    



    return 0;
}