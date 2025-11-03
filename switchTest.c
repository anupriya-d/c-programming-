//switch case - Alternative for if else conditionals 


#include <stdio.h>

int main(){

    int dayofweek = 16;

    switch (dayofweek)
    {
    case 1:
        /* code */
        printf("It is Monday\n");
        break;
    case 2:
        /* code */
        printf("It is Tuesday\n");
        break;
    case 3:
        /* code */
        printf("It is Wednesday\n");
        break;
    case 4:
        /* code */
        printf("It is Thursday\n");
        break;
    case 5:
        /* code */
        printf("It is Friday\n");
        break;
    case 6:
        /* code */
        printf("It is Saturday\n");
        break;
    case 7:
        /* code */
        printf("It is Sunday\n");
        break;
  
    default:
        printf("No day for this number\n");
        
    }
    return 0;


}