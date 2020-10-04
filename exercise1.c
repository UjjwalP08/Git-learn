#include <stdio.h>

void reverse(int arr[])
{
    int j = 0;
    for (int i = 7; i >= 0; i--)
    {
        printf("The value is at %d index in %d \n", j, arr[i]);

        j++;
    }
}
int main()
{

    int ar[] = {25, 32, 3, 5, 67, 8, 34, 45};

    printf("Before reversing array \n\n");

    for (int i = 0; i < 8; i++)
    {

        printf("The value at %d index in %d\n", i, ar[i]);
    }

    printf("\nAfter reversing array \n \n");

    reverse(ar);

    return 0;
}