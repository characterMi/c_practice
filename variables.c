#include <stdio.h>

int main()
{
    // declaration, we're creating space in memory for a variable
    int x;
    // initialization, we're assigning a value to the x variable
    x = 5;

    // we can combine these two steps together
    int y = 10;

    int age = 32;
    float height = 1.75;      // floating point number
    char grade = 'A';         // single character
    char name[] = "Abolfazl"; // array of characters

    printf("You are %d years old\n", age);
    printf("Your height is %f meters\n", height);
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);

    return 0;
}