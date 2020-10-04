#include <stdio.h>

int avg(int a, int b) // Formal Parameter
{

    int c, avg; // Formal Parameter
    printf("Enter a value of c: \n");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    return avg;
}
int main()
{
    int x, y, z; //Actual Parameter
    printf("Enter a Value of a:\n");
    scanf("%d", &x);

    printf("Enter a Value of b:\n");
    scanf("%d", &y);

    z = avg(x, y);

    printf("The Average of a,b,c is %d", z);

    return 0;
}