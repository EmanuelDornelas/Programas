#include <stdio.h>

int main()
{
    int a;
    int b;
    int *pa = &a;
    int *pb = &b;

    printf("Entre com o valor da variavel a: ");
    scanf("%d", &a);
    printf("Entre com o valor da variavel b: ");
    scanf("%d", &b);

    if(pa > pb)
    {
        printf("Valor encontrado no maior endereco: %d", *pa);
    }
    else
    {
        printf("Valor encontrado no maior endereco: %d", *pb);
    }
    return 0;
}