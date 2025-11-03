//Number guessing game 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    //printf("%d\n",rand()); get random number and display it directly

    int randNum = rand() % 6 + 1 ; //get random number between 0 - 5 and make it between 1 - 6 need to add 1 as offset.

    printf("%d\n",randNum); 








    return 0;
}