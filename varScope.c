//variable scope
#include <stdio.h>

//int result -> GLOBAL Variable is not good practice hard to debug code

int add(int x,int y){
    int result = x+y;
    return result ; //local variable which stay withing the scope between relevant ->{}
}

int sub(int x,int y){
    int result = x-y;
    return result;
}


int main(){

    int x = 34;
    int y = 13;
    

    int result = sub(x,y);
    printf("Result is %d\n",result);

    return 0;
}

