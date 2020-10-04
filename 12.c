#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d \n", argc);

    for (int i = 0; i < argc; i++)
    {

        printf("The value of argc %s at index %d \n", argv[i], i);
    }

    return 0;
}
