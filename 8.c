#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    char string[340];

    ptr = fopen("my.txt", "r");

    fgets(string, 34, ptr);

    printf("now add this in file \t %s ", string);

    fclose(ptr);

    return 0;
}
