#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int *vetor, int tamanho)
{
    int *fim = vetor + tamanho;

    for(int *i = vetor; i < fim - 1; i++)
    {
        for(int *j = vetor; j < fim - 1 - (i - vetor); j++)
        {
            if(*j > *(j + 1))
            {
                swap(j, j + 1);
            }
        }
    }
}
int main()
{
    int v[6] = {1, 7, 32, 9, 1, 13};

    printf("Vetor: ");
    for(int *p = v; p < v + 6; p++)
    {
        printf("%d ", *p);
    }

    bubble_sort(v, 6);

    printf("\nVetor ordenado: ");
    for(int *p = v; p < v + 6; p++)
    {
        printf("%d ", *p);
    }
    return 0;
}