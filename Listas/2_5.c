#include <stdio.h>

int main()
{
    int v[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Entre com o valor do vetor: ");
        scanf("%d", v + i);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Dobro dos valores entrados: %d\n", 2 * *(v + i));
    }
    return 0;
}