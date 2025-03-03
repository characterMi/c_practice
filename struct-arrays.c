#include <stdio.h>

struct User
{
    char name[25];
    int age;
};

int main()
{
    struct User user1 = {"Ali", 18};
    struct User user2 = {"Abolfazl", 24};
    struct User user3 = {"Mohsen", 28};

    struct User users[] = {user1, user2, user3};

    for (int i = 0; i < sizeof(users) / sizeof(users[0]); i++)
    {
        printf("Name: %s, Age: %d\n", users[i].name, users[i].age);
    }

    return 0;
}