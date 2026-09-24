#include <stdio.h>

int calcular_tabuada(int n)
{
    int resultado;
    for(int i = 0; i <= n; i++)
    {
        resultado = i * n;

        printf("%d x %d = %d\n", i, n, resultado);
    }
}
int main()
{
    int n;
    
    printf("Entre com um numero n: ");
    scanf("%d", &n);

    calcular_tabuada(n);

    return 0;
}
