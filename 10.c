#include <stdio.h>

int add(int a, int b)
{

    return a + b;
}
int main()
{
    printf("The sum is %d\n", add(1, 3)); // Testing function

    int (*pt)(int, int); // declare function pointer

    pt = &add; // create function pointer

    int a = (*pt)(3, 9); // derefrence the function pointer

    printf("The sum is %d \n", a);
    return 0;
}
