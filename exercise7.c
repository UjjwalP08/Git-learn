#include <stdio.h>
#include <stdlib.h>
int main()
{

    int sum = 0;
    int a[2][3], b[3][2], result[2][2];

    // First Matrix values

    printf("Enter first matrix value \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Second Matrix values

    printf("Enter second matrix value \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }

    // Calculation of matrix multiplication

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            result[i][j] = sum;
            sum = 0;
        }
    }

    // Resltunt Matrix values

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}