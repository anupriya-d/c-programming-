//function 


#include <stdio.h>

void greeting(char name[], int age){
    //this function expecting two parameters
    printf(" Hello %s your are %d years old ! \n",name,age);
}


int main(){

    char name[] = "Anup";
    int age = 41;

    greeting(name,age); // when call function we call it with arguements


}