
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[25];
    int age;
};

int main()
{
    struct Person user_1;
    struct Person user_2;

    strcpy(user_1.name, "Ali");
    user_1.age = 18;
    strcpy(user_2.name, "Mohammad");
    user_2.age = 24;

    printf("Name: %s, Age: %d\n", user_1.name, user_1.age);

    return 0;
}