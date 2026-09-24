#include <stdio.h>

int *buscar_x(int *vetor, int tamanho, int x)
{
    int *fim = vetor + tamanho;

    for(; vetor < fim; vetor++)
    {
        if(*vetor == x)
        {
            return vetor;
        }
    }
    return NULL;
}
int main()
{
    int v[5] = {5, 10, 15, 20, 25};
    int x;

    printf("Entre com o valor de x: ");
    scanf("%d", &x);

    int *resultado = buscar_x(v, 5, x);

    if(resultado != NULL)
    {
        printf("O valor %d foi encotrado no endereco de memoria %p", x, (void *)resultado);
    }
    else
    {
        printf("O valor %d nao foi encontrado no vetor", x);
    }
    return 0;
}