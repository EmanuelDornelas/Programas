#include <stdio.h>

void imprimir_vetor(int *vetor, int tamanho)
{
    int *fim = vetor + tamanho; //Guarda o endereco para servir de referencia de parada

    for(; vetor < fim; vetor++)
    {
        printf("%d ", *vetor);
    }
}
int main()
{
    int v[3] = {3, 6, 12};

    printf("Conteudo presente no vetor: ");

    imprimir_vetor(v, 3);

    return 0;
}