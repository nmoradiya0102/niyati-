#include <stdio.h>
main()
{
    int a=10,b=387632;
    printf("Before swap walue of a is:%d\n",a);
    printf("Before swap walue of b is:%d\n",b);
    a=a+b;
    b=a-b;
    printf("After swap walue of b is:%d\n",b);
    a=a-b;
    printf("After swap walue of a is:%d",a);
}
