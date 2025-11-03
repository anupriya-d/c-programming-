//shopping cart programme 


#include <stdio.h>
#include <string.h>

int main(){

    char item[50] ="";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item you need ? ");
    fgets(item,sizeof(item),stdin); 
    item[strlen(item)-1] = '\0';
    // if need to remove unneccessory new line char => item[strlen(item)-1] = '\0' this make last char to null oprtr 
    //code must be here
    // also #include <string.h> too

    printf("What is the price of each ? ");
    scanf("%f",&price);

    printf("How many would you like ? ");
    scanf("%d",&quantity);

    total = price * quantity ;

    printf("You bought %d%ss\n",quantity, item);
    printf("Total is %c %.2f",currency, total);


    return 0;
}