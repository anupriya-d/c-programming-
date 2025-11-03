//Area of Triangle

#include <stdio.h>
#include <string.h>

int main(){

    float base = 0.0f;
    float height = 0.0f;
    float area = 0.0f;

    

    printf("Enter Base for Triangle in cm :");
    scanf("%f" , &base);

    printf("Enter Height for Triangle in cm :");
    scanf("%f" , &height);

    area =  base * height/2.0;

    printf("Area of a Triangle is %.2f\n" , area);

    return 0;


}
