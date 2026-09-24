#include <stdio.h>

float media_aritmetica()
{
    float n;
    float sum = 0;
    int quantidade = 0;

    printf("Entre com um valores positivos (0 para encerrar): ");

    scanf("%f", &n);

    while(n != 0)
    {
        sum += n;

        quantidade++;

        printf("Entre com um valores positivos (0 para encerrar): ");

        scanf("%f", &n);
    }
    if(quantidade == 0)
    {
        return 0;
    }
    return sum / quantidade;
}
int main()
{

    float resultado = media_aritmetica();

    printf("A media aritmetica dos n primeiros numeros e: %.2f", resultado);

    return 0;
}