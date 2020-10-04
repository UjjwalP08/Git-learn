#include <stdio.h>

int main()
{
    int a = 45;

    float b = 64.4444;

    typedef void *ptr;

    ptr p;

    p = &a;

    printf("The value of a is %d \n", *((int *)p));

    p = &b;

    printf("The value of b is %1.5f \n", *((float *)p));
    return 0;
}
