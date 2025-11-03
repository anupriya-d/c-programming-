//function proto type 

#include <stdio.h>
#include <stdbool.h>

void hello(char name[],int age);
bool ageCheck(int age);

int main()
{
    hello("Anup", 42);
    /* code */
    return 0;
}


void hello(char name[],int age){

    printf("Hello %s ! \n",name);
    printf("You are %d years old\n",age);

    if (ageCheck(30))
    {
        printf("You are old enough\n");
        /* code */
    }else{
        printf("You must be 16+\n");
    }
    

}


bool ageCheck(int age){
    if(age >=16){
        return true;
    }else{
        return false;
    }

    //or can use return age >=16;
}