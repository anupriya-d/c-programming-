//pointer is variable that stores memory address of other varible 
#include <stdio.h>


int main(){


    int age = 41;

    printf("%p\n", &age); //print memory address of pointer -> format specifier for pointer is %p;

    int *pAge = &age;

    printf("%p\n",pAge );




    return 0;
}