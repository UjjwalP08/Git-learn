#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter n:");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array is: ", i);

        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The element of %d is the %d \n", i, ptr[i]);
    }
    free(ptr);
    printf("Enter new size of array you want to create : ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(n));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array is: ", i);

        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The element of %d is the %d \n", i, ptr[i]);
    }

    return 0;
}
