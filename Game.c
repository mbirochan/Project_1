#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    char p1[20], p2[20];
    printf("player 1 Enter your Name \n");
    scanf("%s", &p1);
    printf("player 2 Enter your Name\n");
    scanf("%s", &p2);
    printf("     Welcome to the Game!!!!!\n");

    int num, guess, count1 = 0, count2 = 0;
    srand(time(0));
    num = rand() % 100 + 1;

    printf("%s Now you will have to guess the Computer \n", p1);
    do
    {
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("You guessed less\n");
        }
        else if (guess > num)
        {
            printf("You guessed higher than the Number\n");
        }
        else if (guess == num)
            printf("You guessed it right\n");

        count1++;
    } while (guess != num);
    printf("Now its %s 's turn\n", p2);
    num = rand() % 100 + 1;
    printf("%s Now you will have to guess the Number \n", p2);
    do
    {
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("You guessed less\n");
        }
        else if (guess > num)
        {
            printf("You guessed higher than the Number\n");
        }
        else if (guess == num)
            printf("You guessed it right\n");

        count2++;
    } while (guess != num);
    if (count1 < count2)
        printf("%s is Winner because he guessed in %d attempts than %d \n", p1, count1, count2);
    else if (count2 < count1)
        printf("%s is Winner because he guessed in %d attempts than %d \n", p2, count2, count1);

    return 0;
}