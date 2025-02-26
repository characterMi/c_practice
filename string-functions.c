#include <string.h>

int main()
{
    char str1[] = "Abolfazl";
    char str2[] = "Taghasodi";

    // strlwr(str1); // converts a string to lowercase (if you want to convert a character to lowercase use tolower method): abolfazl
    // strupr(str1); // converts a string to uppercase (if you want to convert a character to lowercase use toupper method): ABOLFAZL
    // strcat(str1, str2); // appends str2 to end of str1: AbolfazlTaghadosi
    // strncat(str1, str2, 1); // appends n characters from str2 to str1: AbolfazlT
    // strcpy(str1, str2); // copy str2 to str1: Taghadosi
    // strncpy(str1, str2, 4); // copy n characters of str2 to str1: Taghfazl

    // strset(str1, '*'); // sets all characters of a string to a given character: ********
    // strnset(str1, '*', 4); // sets n characters of a string to a given character: ****fazl
    // strrev(str1); // reverses a string

    // int result = strlen(str1); // returns the length of a string: 8
    // int result = strcmp(str1, str2); // string comparison: 0 (equal), 1 (str1 > str2), -1 (str1 < str2)
    // int result = strncmp(str1, str2, 4); // string comparison n characters: 0 (equal), 1 (str1 > str2), -1 (str1 < str2)
    // int result = strcmpi(str1, str2); // case insensitive string comparison: 0 (equal), 1 (str1 > str2), -1 (str1 < str2)
    // int result = strnicmp(str1, str2, 1); // case insensitive string comparison n characters: 0 (equal), 1 (str1 > str2), -1 (str1 < str2)

    return 0;
}