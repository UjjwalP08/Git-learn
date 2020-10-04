#include <stdio.h>

int main()
{
    printf("The today's date is %s \n", __DATE__);

    printf("The time is now %s \n", __TIME__);

    printf("This file name is %s \n", __FILE__);

    printf("The no of line is %d \n", __LINE__);

    printf("This compiler work is ANSI type %d \n", __STDC__);

    return 0;
}
