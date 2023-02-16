#include <stdio.h>
main()
{
    int a=10,b=20,c;
    printf("Before swap walue of a is:%d\n",a);
    printf("Before swap walue of b is:%d\n",b);
    c=a;
    a=b;
    b=c;
    printf("After swap walue of a is:%d\n",a);
    printf("After swap walue of b is:%d",b);
}
