#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'A';              // single character;    %c
    char b[] = "Hello World!"; // array of characters; %s

    float c = 3.141592;                // floats use 4 bytes of memory (they have 32 bits of precision) and we can store 6 - 7 digits; %f (if we want to print the value with more digits, we can use %.{number}f)
    double d = 3.14159265358979323846; // doubles use 8 bytes of memory (they have 64 bits of precision) and we can store 15 - 16 digits; %lf (if we want to print the value with more digits, we can use %.{number}lf)

    bool e = true; // bool uses 1 byte of memory (0, 1) and can only store true or false; %d

    char f = 100;          // we can store a number from -128 to +127 in a char; %d or %c (we can display this number either as a integer or a character, so if i want to display this as a character, we will use the ASCII table to convert this number to a character representation, the ASCII table has a range from 0 to 127)
    unsigned char g = 255; // we can store a number from 0 to +255 in a unsigned char, if we set a number bigger than 255, like 256, it overflows and it will reset all the way back to 0; %d or %c

    short h = 32767;          // 2 bytes (-32,768 to +32,767); %d
    unsigned short i = 65535; // 2 bytes (0 to 65,535); %d

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647); %d
    unsigned int k = 4294967295; // 4 bytes (0 to 4,294,967,295); %u

    long long int l = 9223372036854775807;        // 8 bytes (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807) the reason we use long keyword twice is because the int already is a log int, but we don't specifically use the long keyword; %lld
    unsigned long long m = 18446744073709551615U; // 8 bytes (0 to 18,446,744,073,709,551,615); %llu

    return 0;
}