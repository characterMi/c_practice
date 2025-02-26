#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; // 25 bytes
    int age;

    printf("Enter your name: ");
    // using this method, we read user input up to the first space, so if we want to read a whole line, we need to use fgets
    // scanf("%s", &name);
    // stdin: standard input
    fgets(name, 25, stdin);
    // initially, the fgets method will include new line character at the end, so if we don't want that behavior, we include string.h at the top so we can use the strlen method, and that way, we can remove the new line character from the end of our output.
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    // scanf is the opposite of printf, it get user input, first argument is the format, second argument is a pointer to the variable we want to store the input
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}