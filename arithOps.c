//arithmetic oprators = + - * / % ++ --

#include <stdio.h> // to display text using printf 

int main(){

    int x = 2;
    int y = 3 ;

    int z = 0;

    z = x+y;

    printf(" x + y is %d\n",z);


    x = 10;

    z = x % y ;// 10/3 => 3 and remain 1 

    printf(" x % y is %d\n",z);

    // ++ is increament optr => x++ means 11 (previously it was 10)
    // -- decrement 

    return 0;
}