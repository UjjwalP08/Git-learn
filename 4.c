#include <stdio.h>

int *func1()
{

    int a, b, sum;

    sum = a + b;

    return &sum;
}

int main()
{
    int *ptr;
    {

        int a = 3;

        ptr = &a;
    }
    // here ptr is dangling pointer

    int *pt = func1();

    printf("%d \n", *pt);
        printf("%d", *ptr);
    return 0;
}
