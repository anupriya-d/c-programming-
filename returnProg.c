//return statement 

#include <stdio.h>

int square(int num){

    int result = num * num;
    return result;
}


int main()
{
    /* code */
    int a = 3;
    int x = square(a);

    printf("Square of %d is %d \n",a,x);
    return 0;
}
