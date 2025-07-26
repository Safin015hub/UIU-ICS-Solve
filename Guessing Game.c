#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,guess;
    printf("player 1's Number: ");
    scanf("%d",&x);
    printf("Player 2's First Guess: ");
    scanf("%d",&guess);

    if (guess==x)
    {
        printf("Right!Player-2 wins.\n");
    }
    else
    {
        printf("Wrong! 2 chances left.\n");


        //second choice
        printf("Player 2's Second Guess: ");
        scanf("%d",&guess);
        if(guess==x)
        {
            printf("Right!Player-2 wins.\n");
        }
        else
        {
            printf("Wrong! 1 chances left.\n");
            //third chance
            printf("Player 2's Third Guess: ");
            scanf("%d",&guess);
            if(guess==x)
            {
                printf("Right!Player-2 wins.\n");
            }
            else
            {
                printf("Wrong! 0 chances left.\n");
                printf("Player-1 wins!");
            }
        }
    }

    return 0;
}
