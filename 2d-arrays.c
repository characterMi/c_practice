#include <stdio.h>
#include <string.h>

int main()
{
    char items[][15] = {"banana", "pineapple", "apple", "watermelon"};

    // if we want to change an item, we use this method.
    strcpy(items[0], "orange");

    for (int i = 0; i < sizeof(items) / sizeof(items[0]); i++)
    {
        printf("%s \n", items[i]);
    }

    return 0;
}