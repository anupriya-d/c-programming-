#include <stdio.h>

int main(){

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Anup";


    printf("%d\n",age); //%d decimal for int value type

    printf("%f\n",price); //%f for float 

    printf("%lf\n",pi); // %lf or %f for double

    printf("%c\n" , currency);

    printf("%s\n", name);

    


   int num1 = 1;
   int num2 = 10;
   int num3 = 100;

   printf("%d\n",num1);
   printf("%d\n",num2);
   printf("%d\n",num3);


   printf("%3d\n",num1);
   printf("%3d\n",num2);
   printf("%3d\n",num3); //3d for 3 characters 

   printf("%03d\n",num1);
   printf("%03d\n",num2);
   printf("%03d\n",num3); //0 for leading zeros characters 

   printf("%-3d\n",num1);
   printf("%-3d\n",num2);
   printf("%-3d\n",num3); //- for left alignment characters 


   printf("%f\n",price);
   printf("%.2f\n",price);

   return 0;


}