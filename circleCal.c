#include <stdio.h>
#include <math.h>

int main(){


    double raduis = 0.0;
    double area = 0.0;
    const double PI = 3.14159;

    printf("Enter Radius of Circle :");
    scanf("%lf", &raduis);


    area = PI * pow(raduis,2);

    printf("Area of circle is %.2f\n",area);

    
    return 0;
}