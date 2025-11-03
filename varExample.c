#include <stdio.h>
#include <stdbool.h> //for boolean use

int main(){

   //variable -> reusable container for a value

   int age = 25;

   int year = 2025;

   float price = 19.99;

   double PI = 3.1446858469;

   char grade = 'A'; //use single quotes

   char name[] = "Anupriya"; //use double quotes for series of chars (array)

   bool isOnline = true;

   printf("You are %d years old\n",age); // %d format specifier for decimal 
   printf("This year %d !\n",year);
   printf("The price is %.2f\n",price);//%f for float and .2 for two decimal points 
   printf("Your grade is %c\n",grade);
   printf("Hello %s !\n",name);
   printf(" He is online is %d\n",isOnline);
   printf("Value of PI is %lf\n",PI); //lf long float


   if (isOnline)
   {
    printf("You are Online\n");
    
   }else{
    printf("You are not online");
   }
   

   //float for 6 decimal points and for precise can use double

   return 0;
   


   
}