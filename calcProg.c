//Calculater Program

#include <stdio.h>

int main(){

    char oprerator = '\0';

    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Please Enter Number 1 : ");
    scanf("%lf",&num1);

    printf("Please Enter Operator(+ - / *) : ");
    scanf(" %c",&oprerator); // space before format specifier to remove new line charactor 

    printf("Please Enter Number 2 : ");
    scanf("%lf",&num2);

    switch (oprerator)
    {
    case '+':

        result = num1 +num2;
        /* code */
        break;
    
    case '-':

        result = num1-num2;
        /* code */
        break;
    
    case '/':
        
        if (num2 == 0)

        {
            printf("You can't divide by Zero ! ");
            /* code */
        }else{
            result = num1/num2;
        }
        
        /* code */
        break;
    
    case '*':

        result = num1*num2;
        /* code */
        break;
    
    default:
        printf("You Entered invalid oprator");
    }


    printf("Result is %f\n", result);








    return 0;
}