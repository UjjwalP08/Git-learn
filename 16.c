#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genraterandomno(int n)
{

    srand(time(NULL));

    return rand() % n;
}
int main()
{
    
    printf("The random no between 0 to 5 is %d",  genraterandomno(5));

    return 0;
}