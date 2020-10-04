#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genraterandomno(int n)
{

    srand(time(NULL));

    return rand() % n;
}

int grater(char char1, char char2)
{
    // If char1>char2 so return 1 otherwise return 0; for char1=char2 so return -1.

    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }

    else if ((char1 == 's') && (char2 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 'r') && (char2 == 'p'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 's'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, computerscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 's', 'p'};

    printf("Welcome to Rock Paper and Scissor Game \n");

    for (int i = 0; i < 3; i++)
    {

        printf("Choose 1 for Rock, 2 for Scissor, 3 for Paper\n");
        // Player Input's
        printf("Player turn\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You Choose %c\n\n", playerchar);

        // CPU Input's
        printf("Computer turn\n");
        temp = genraterandomno(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU Choose %c\n \n", compchar);

        // Compare Score

        if (grater(compchar, playerchar) == 1)
        {
            computerscore += 1;
            printf("CPU Got it!! \n\n");
        }

        else if (grater(compchar, playerchar) == -1)
        {
            computerscore += 1;
            playerscore += 1;

            printf("Its Draw \n\n");
        }

        else
        {
            playerscore += 1;
            printf("You Got it!!!\n\n");
        }

        printf("Your score now is %d\n", playerscore);
        printf("CPU score now is %d\n", computerscore);
    }

    if (playerscore > computerscore)
    {
        printf("You are Win \n");
    }

    else if (playerscore < computerscore)
    {
        printf("CPU Win\n");
    }
    else
    {
        printf("Its Draw");
    }

    return 0;
}