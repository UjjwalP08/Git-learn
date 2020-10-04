#include<stdio.h>

int main()
{
    int a=54;

    int *ptr=NULL;

    if (ptr != NULL)
    {
    
        printf("The value of %d is \n",ptr);

    }

    else
    {
        printf("The pointer is null so can't show value");
    }
    
    return 0;
}
