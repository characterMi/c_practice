#include <stdio.h>
#include <string.h>

int main()
{
    char unit[2];

    printf("Enter the unit you want to convert (KG or LB): ");
    scanf("%s", &unit);

    if (strcmpi("KG", unit) != 0 && strcmpi("LB", unit) != 0)
    {
        printf("Invalid input!");
        return 1;
    }

    double weight;

    printf("now Enter the weight: ");
    scanf("%lf", &weight);

    double result = strcmpi("KG", unit) == 0 ? weight * 2.2046 : weight / 2.2046;

    printf("The result is %.lf", result);

    return 0;
}