#include <stdio.h>

int main()
{
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1 is %8.2f\n", item1);
    printf("Item 2 is %8.2f\n", item2);
    printf("Item 3 is %8.2f\n", item3);

    /*
    output:

    Item 1 is     5.75
    Item 2 is    10.00
    Item 3 is   100.99

    */

    return 0;
}