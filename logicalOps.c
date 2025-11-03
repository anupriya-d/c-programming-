// logical operator = Used to combine or modify boolean expression

// && = AND
// || = OR
// ! = NOT


#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isStudent = false;
    bool isSenior = true;


    if(isStudent && isSenior){
        printf("You are a Senior Student\n");
    }else if(isStudent && !isSenior){

        printf("You are a student only\n");

    }else if(!isStudent && isSenior){

        printf("You are a senior only\n");
    }else{
        printf("You are not student or senior\n");
    }




    return 0; 
}