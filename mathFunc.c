//Math functions 
#include <stdio.h>
#include <math.h>

int main(){

    int x = 9;
    int y = 2;

    x = sqrt(x);

    y = pow(y,3); // 2^3
    
    printf("%d\n",x);

    printf("%d\n",y);

    return 0;
}

/*

error happens because sqrt() is part of the math library (libm), which isn’t linked automatically by gcc.

To fix it, you must explicitly link the math library during compilation.

Correct compile command:
gcc mathFunc.c -o mathFunc -lm
*/