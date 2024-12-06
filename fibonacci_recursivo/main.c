#include <stdio.h>
#include <time.h>
#include "fibonacci.h"

int main()
{
    int n;
    clock_t start, end;
    double duracao;

    printf("Quantos termos da sequência de Fibonacci você deseja exibir? ");
    scanf("%d", &n);

    start = clock();
    lista_fibonacci(n);
    end = clock();

    duracao = ((double)end - start) / CLOCKS_PER_SEC;
    printf("\nO tempo gasto para Fibonacci recursivo foi: %f segundos.\n", duracao);

    printf("\n");
    return 0;
}
