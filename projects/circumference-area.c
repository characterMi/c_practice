#include <stdio.h>

int main()
{
    const double PI = 3.141592;

    double radius;

    printf("Enter radius of a circle: ");
    scanf("%lf", &radius);

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("Circumference of a circle with radius of %.lf is equal to %lf\n", radius, circumference);
    printf("Area of a circle with radius of %.lf is equal to %lf\n", radius, area);

    return 0;
}