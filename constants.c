#include <stdio.h>
#include <stdbool.h>

int main()
{
    // we cannot change the value of a constant
    const float PI = 3.14159265358979323846;

    printf("fixed value %f", PI);

    return 0;
}