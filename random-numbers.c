#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber()
{
    return (rand() % 6) + 1;
}

int main()
{
    // generate a seed using current time
    srand(time(0));

    // rand() returns a random number between 0 - 32,767
    int random_number = generateRandomNumber();

    printf("Random number: %d\n", random_number);

    return 0;
}