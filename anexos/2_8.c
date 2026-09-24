#include <stdio.h>

int preencher_vetor(int *vetor, int tamanho, int valor)
{
    while(tamanho > 0)
    {
        *vetor = valor;

        vetor++;

        tamanho--;
    }
}
int main()
{
    int v[10];
    int valor;

    printf("Entre com o valor para preencher o vetor: ");
    scanf("%d", &valor);

    preencher_vetor(v, 10, valor);

    printf("Conteudo presente no vetor: ");
    
    for(int *ptr = v; ptr < v + 10; ptr++)
    {
        printf("%d ", *ptr);
    }
    return 0;
}