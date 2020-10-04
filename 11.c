#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char str[50];

    fp = fopen("u.txt", "r+");

    fputs("This  new type of file you create", fp);

    fputc('u', fp);

    fclose(fp);

    fp = fopen("u.txt", "r");

    char *c = fgetc(fp);

    printf("The character i read it was %c \n", c);

    fgets(str, 50, fp);

    printf("string is %s", str);

    fclose(fp);
    return 0;
}
