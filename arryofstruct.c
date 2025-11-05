//Array of struct 

#include <stdio.h>

typedef struct
{
    char model[30];
    int year;
    int price;
}Car;


int main(){

    Car cars[] = {{"Mustang",2025,32000},
                  {"Rav4",2012,14000},
                  {"Note",2014,10000}};

    int count = sizeof(cars)/sizeof(cars[0]);

    for (int i = 0; i < count; i++)
    {
        printf("%s in made in %d and price is %d\n",cars[i].model,cars[i].year,cars[i].price);
        /* code */
    }
    


    return 0;
}