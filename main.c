#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    char s[] = "Hello World!";
    char r[] = "Hello";
    int j = 0;
    for (int i = 0; i < sizeof(s); i++)
    {
        if (s[i] == r[j])
            j++;
    }
    printf(sizeof(r) == j ? "match" : "no match");
    int n = 5;
    // %d means integer, so the next argument is an integer
    printf("\n factorial of %d is %d\n", n, factorial(n));
    // %s means string, so the next argument is a string
    printf("Hello %s!\n", "\t Abolfazl");
    return 0;
}
