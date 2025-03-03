#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int random_number = rand() % 10 + 1;
    int user_guess;

    printf("Guess a number between 1 and 100!\n");
    scanf("%d", &user_guess);

    if (user_guess == random_number)
    {
        printf("Correct!");
    }
    else
    {
        printf("Incorrect!");
    }

    return 0;
}