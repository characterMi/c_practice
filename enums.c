#include <stdio.h>

enum Color
{
    Black,
    Blue,
    Red,
};

int main()
{
    enum Color color = Red;

    switch (color)
    {
    case Black:
        printf("The color is black");
        break;
    case Blue:
        printf("The color is blue");
        break;
    case Red:
        printf("The color is red");
        break;
    }

    return 0;
}