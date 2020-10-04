#include <stdio.h>
void loop(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{

    int n;
    printf("Enter a value of n: \n");
    scanf("%d", &n);
    loop(n);

    return 0;
}