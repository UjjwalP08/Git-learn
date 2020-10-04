#include <stdio.h>
#include <stdlib.h>
int main()
{

    int chars, i = 0;
    char *ptr;

    while (i < 3)
    {
        printf("Enter total characters in your ID:");
        scanf("%d", &chars);

        ptr = (char *)malloc((chars + 1) * sizeof(char));

        printf("Enter your ID:\n");
        scanf("%s", ptr);

        printf("Display\n");

        printf("Your ID is %s \n", ptr);

        i = i + 1;
    }

    free(ptr);

    return 0;
}
