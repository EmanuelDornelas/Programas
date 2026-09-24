#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media)
{
    int *fim = vetor + tamanho;
    int sum = 0;

    *min = *vetor;
    *max = *vetor;

    for(int *p = vetor; p < fim; p++)
    {
        if(*p < *min)
        {
            *min = *p;
        }
        if(*p > *max)
        {
            *max = *p;
        }
        sum += *p;
    }
    *media = (float)sum/ tamanho;
}
int main()
{
    int v[5] = {1, 9, 13, 2, 7};
    int minimo;
    int maximo;
    float media;

    extrair_estatisticas(v, 5, &minimo, &maximo, &media);

    printf("Vetor: ");

    for(int *p = v; p < v + 5; p++)
    {
        printf("%d ", *p);
    }
    printf("\nMinimo: %d", minimo);
    printf("\nMaximo: %d", maximo);
    printf("\nMedia: %.2f", media);

    return 0;
}