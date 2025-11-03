#include <stdio.h>
#include <string.h> //no use of this at this moment 

int main(){

    printf("-----------Hello World !------------\n");


    int age =0 ; // if you use this without asginning it will gives you false value , better to use 0 as intial value utill asign them and use it 
    float gpa =0;
    char grade = '\0' ; //null terminator 
    char fname[30]= "";
    char fullname[50] = "";

    //printf("Age is %d\n",age);
    //printf("grade  is %c\n",grade);

    //getting value from user 

    printf("Enter your Age :");
    scanf("%d", &age); //& address of opr of age variable
    

    printf("Enter your gpa : ");
    scanf("%f", &gpa); //& address of opr of age variable

    printf("Enter your grade : ");
    scanf(" %c", &grade); //add space before %c to clear newline char 


    printf("Enter your First Name : ");
    scanf(" %s", &fname); //scanf can read white space


    getchar();
    printf("Enter your Full Name : ");
    fgets(fullname,sizeof(fullname),stdin); //scanf can read white space



    printf("Age is %d\n",age);
    printf("GPA is %f\n",gpa);
    printf("Grade is %c\n",grade);
    printf("First Name is %s\n",fname);
    printf("Full Name is %s\n",fullname); // if you move this to up to print first you'll have issue with new line char end of fullname 

    return 0;
}