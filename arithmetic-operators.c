#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x = 5;
    int y = 2;

    /*
    using int will not work as the output is 2.5 which is a float, also if we divide by an integer, we truncate that decimal portion, we either change our divider to a float, or we can convert the integer to a float <x / (float) y>
    float z = x / (float)y;

    printf("x / y = %f\n", z);
    */

    // other operators are the same as javascript and other languages, the only thing to keep in mind is division.

    return 0;
}