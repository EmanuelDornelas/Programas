#include <stdio.h>

int calcular_somatorio(int n)
{
    int sum = 0;

    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;

    printf("Entre com um numero inteiro positivo n: ");
    scanf("%d", &n);

    int resultado = calcular_somatorio(n);

    printf("O somatorio dos n numeros e: %d", resultado);

    return 0;
}