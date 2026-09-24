#include <stdio.h>

double calcularS(int n)
{
    double s = 1;
    double fatorial = 1;

    for(int i = 1; i <= n; i++)
    {
        fatorial *= i;

        s += 1 / fatorial;
    }
    return s;
}
int main()
{
    int n;

    printf("Entre com um numero n inteiro e positivo: ");
    scanf("%d", &n);

    printf("S = %.5f", calcularS(n));

    return 0;
}