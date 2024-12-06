#include <stdio.h>
#include "fibonacci.h"

int main()
{
    int n;

    printf("Quantos termos da sequência de Fibonacci você deseja exibir? ");
    scanf("%d", &n);

    lista_fibonacci(n);

    printf("\n");
    return 0;
}
