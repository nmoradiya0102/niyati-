#include <stdio.h>
main()
{
    float p,r,t,amount;
    printf("Enter intial amount:");
    scanf("%f",&p);
    printf("Enter interest rate:");
    scanf("%f",&r);
    printf("Enter time of interest:");
    scanf("%f",&t);
    amount = p*r*t/100;
    printf("Simple Interest is: %f\n",amount);
    amount = p + amount;
    printf("Final amount is %f",amount);
}
