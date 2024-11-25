#include <stdio.h>
#include "func.h"

int main()
{
    int n;
    printf("Quantos termos da sequência de Fibonacci você deseja exibir? ");
    scanf("%d", &n);
    exibe_fibonacci(n);
    printf("\n");
    return 0;
}
