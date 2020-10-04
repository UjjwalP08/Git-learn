#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genraterandomno(int n)
{

    srand(time(NULL));

    return rand() % n;
}

int comp(char c1, char c2)
{

    //  if c1=c2 return 1 otherwise return 0.

    if (c1 == c2)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
int main()
{
    int playertoss = 0, comptoss = 0, temp;
    char playerchar, compchar;
    char toss[] = {'H', 'T'};

    printf("Welcome to Coin Toss \n");

    for (int i = 0; i < 3; i++)
    {

        printf("Chosse 1 for Head, 2 for Tail\n");

        // Player Choose

        printf("Player Turn\n");
        scanf("%d", &temp);
        getchar();
        playerchar = toss[temp - 1];
        printf("Player choose %c\n\n", playerchar);

        // Toss Processs

        temp = genraterandomno(2) + 1;
        compchar = toss[temp - 1];
        printf("coin get %c\n\n", compchar);

        if (comp(compchar, playerchar) == 1)
        {
            playertoss += 1;
            printf("You win the toss \n\n");
        }
        else
        {
            comptoss += 1;
            printf("You loss the toss \n\n\n");
        }
        printf("You won toss %d time\n\n\n", playertoss);
    }

    if (playertoss > comptoss)
    {
        printf("Finally You won the toss\n\n");
    }
    else
    {
        printf("Finally You loss the toss \n\n");
    }

    return 0;
}