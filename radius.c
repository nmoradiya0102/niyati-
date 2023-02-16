#include <stdio.h>
main()
{
    float r;
    const float pi=3.14 ;
    printf("Enter radius of a circle:");
    scanf("%f",&r);
    float area;
    area = pi * r * r;
    printf("Area of circle is:%f",area);
}
