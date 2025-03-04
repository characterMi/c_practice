#include <stdio.h>
#include <string.h>

void read_example()
{
    // returns the pointer to the file if exists otherwise null;
    // accepts two arguments, file path and mode (r, w, a, etc.)
    FILE *file = fopen("./files/index.html", "r");

    if (file == NULL)
    {
        printf("Error opening file!");
    }
    else
    {
        char buffer[100];
        while (fgets(buffer, 100, file) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(file);
}

void write_example()
{
    // w will create the file if doesn't exist, and will nuke it every time we run our program.
    // a will create the file if doesn't exist, and will append new content to the end of the file.
    FILE *file = fopen("./files/test.txt", "a");

    fprintf(file, "Hello world!");

    fclose(file);
}

int main()
{
    read_example();
    write_example();

    if (remove("./files/new-file.txt") == 0)
    {
        printf("File removed successfully!");
    }

    return 0;
}