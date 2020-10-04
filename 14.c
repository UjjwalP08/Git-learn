#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0;

    int *p;

    while (i < 45986)
    {
        printf("Welcome to coding Ujjwal \n");
        p = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }

        i++;
    }
    
    free(p);

    return 0;
}
