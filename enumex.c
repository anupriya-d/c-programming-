//enum = a user defined data type

#include <stdio.h>

enum Day {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY}; // we can give number for each element like SUNDAY = 1, 

int main(){


    enum Day today = WEDNESDAY;

    printf("today is %d\n",today); // should print 3 

    return 0;
}