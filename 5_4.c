#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int tamanho;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)(malloc(tamanho * sizeof(int)));

    for(int i = 0; i < tamanho; i++)
    {
        printf("Entre com valores para preencher o vetor: ");
        scanf("%d", &vetor[i]);
    }
    printf("Valores dentro do vetor: ");
    for(int i = 0; i < tamanho; i++)
    {
         printf("%d ", vetor[i]);
    }
    return 0;
}