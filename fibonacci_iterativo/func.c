#include <stdio.h>

int fibonacci(int n)
{
    int a = 1, b = 1, fib = 1;

    if (n == 1 || n == 2)
        return fib;

    for (int j = 3; j <= n; j++)
    {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

void exibe_fibonacci(int n)
{
    for (int j = 1; j <= n; j++)
        printf("%d ", fibonacci(j));
}
