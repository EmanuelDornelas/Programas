#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho)
{
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;

    while(inicio < fim)
    {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}
int main()
{
    int v[5] = {1, 2, 3, 4, 5};

    printf("Elementos dentro do vetor: ");
    for(int *i = v; i < v + 5; i++)
    {
        printf("%d ", *i);
    }

    inverte_vetor(v, 5);

    printf("\nElementos invertidos do vetor: ");
    for(int *i = v; i < v + 5; i++)
    {
        printf("%d ", *i);
    }
    return 0;
}