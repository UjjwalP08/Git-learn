#include <stdio.h>
#include <string.h>

void paser(char *str)
{
    int in = 0, index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        // Remove tags to write this
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {

            in = 0;
            continue;
        }

        if (in == 0)
        {

            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // Remove space from begaing

    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    char str[] = "<h1>   This is HTML paser program    </h1>";
    paser(str);

    printf("The string is ~~%s~~", str);

    return 0;
}
