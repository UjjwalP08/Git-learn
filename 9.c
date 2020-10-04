#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    char string[100];

    gets(string);

    ptr = fopen("me.txt", "w");

    fprintf(ptr, "%s", string);

    fclose(ptr);
    ptr = fopen("me.txt", "r");

    fscanf(ptr, "%s", string);

    printf("this is new type in c \t %s", string);

    fclose(ptr);

        return 0;
}
