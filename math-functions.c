#include <stdio.h>
#include <math.h>

int main()
{
    double PI = 3.14159265358979323846;

    double a = sqrt(125);
    double b = pow(2, 3);
    int c = round(PI);
    int d = ceil(PI);
    int e = floor(3.99);
    double f = fabs(-100);
    double g = log(3);
    double h = sin(45);
    double i = cos(45);
    double j = tan(45);

    printf("sqrt(125) = %.lf\n", a);
    printf("pow(2, 3) = %.lf\n", b);
    printf("round(PI) = %d\n", c);
    printf("ceil(PI) = %d\n", d);
    printf("floor(PI) = %d\n", e);
    printf("fabs(-100) = %.lf\n", f);
    printf("log(3) = %lf\n", g);
    printf("sin(45) = %lf\n", h);
    printf("cos(45) = %lf\n", i);
    printf("tan(45) %lf\n", j);

    return 0;
}
