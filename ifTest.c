//conditional statements

#include <stdio.h>

int main(){

    char choice = '\0';

    printf("Enter Letter A or B or C :");
    scanf("%c", &choice);

    if(choice == 'A'){
        printf("You Entered Letter A\n");
    }else if(choice == 'B') 
    {
        printf("You Entered Letter B\n");
    }else if (choice=='C')
    {
        /* code */
        printf("You Entered Letter C\n");
    }else{
        printf("You Entered Invalid Letter\n");
    }
    

    return 0;


}