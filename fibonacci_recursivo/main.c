#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return (fibonacci(n - 2) + fibonacci(n - 1));
}

void lista_fibonacci(int n)
{
    for (int j = 1; j <= n; j++)
        printf("%d ", fibonacci(j));
}

int main()
{
    int n;

    printf("Quantos termos da sequência de Fibonacci você deseja exibir? ");
    scanf("%d", &n);

    lista_fibonacci(n);

    printf("\n");
    return 0;
}
