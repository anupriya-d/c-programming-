//ternary operator (condition ) ? value if true: value if false


#include <stdio.h>
#include<stdbool.h>

int main(){


    int number = 8;

    printf("%d is  %s\n",number, (number % 2 == 0) ? "even":"odd");
    

    //int age = 21;

    //char *result = (age >= 18) ? "adult" : "child";

    //printf("You are %s \n" , result);


    return 0;
}