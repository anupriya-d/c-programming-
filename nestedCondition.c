//nested conditional statements

#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = true; //20% discount 

    //student = $9
    //senior = $8
    //student + senior = $7




    if(isStudent){
        if (isSenior)
        {
            printf("You will get student discount \n");
            printf("You will get senior discount \n");
            price = price * 0.7;

            /* code */
        }else{

            printf("You will get student discount \n");
            price = price * 0.9;
        }
        
        
    }else{
        if (isSenior)
        {
            printf("You will get senior discount \n");
            price = price * 0.8;

            /* code */
        }
        
    }

    printf("You have to pay %.2f\n",price);




    return 0;
}