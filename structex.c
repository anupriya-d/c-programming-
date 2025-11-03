//struct like a object

#include <stdio.h>
#include <stdbool.h>


struct Student
{
    char name[50];
    int age;
    bool isFullTime;
    /* data */
};


int main(){

    struct Student student1 = {"Kevin", 40,true};

    printf("Name is %s\n",student1.name);

    printf("Age is %d\n",student1.age);

    printf("%s is student ? %s\n",student1.name,(student1.isFullTime)? "Yes":"No");


    return 0;
}