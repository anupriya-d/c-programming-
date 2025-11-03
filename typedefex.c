//typedef existing_type -> new_name -> int -> numbers
//typedef is a reserved keyword that gives an existing datatype a nickname for make less complexbility 
#include <stdio.h>

typedef char string[50];


int main(){

    string name = "Anupriya"; // use string for char 

    printf("Name is %s\n",name);


    return 0;

}