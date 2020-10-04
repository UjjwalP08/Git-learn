#include <stdio.h>

#define square(r) r *r

#define pi 3.14
int main()
{
    int a = 4;

    float f = pi;

    printf("The value of pi is %f\n", f);
    printf("The squre of a is %d", square(a));
    return 0;
}
