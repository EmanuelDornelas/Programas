#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro
{
    char nome[100];
    int idade;
    char endereco[150];
};
struct Cadastro* preencher_cadastro(int n)
{
    struct Cadastro *vetor = (struct Cadastro*) malloc(n * sizeof(struct Cadastro));

    if(vetor == NULL)
    {
        printf("Erro de alocacao de memoria");
        
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        printf("Entre com os dados da pessoa %d:\n ", i + 1);

        printf("Nome: ");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &vetor[i].idade);
        getchar();

        printf("Endereco: ");
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
        vetor[i].endereco[strcspn(vetor[i].endereco, "\n")] = '\0';
        
    }
    return vetor;
}
int main()
{
    int N;

    printf("Entre com a quantidade de pessoas: ");
    scanf("%d", &N);
    getchar();

    struct Cadastro *Vetor = preencher_cadastro(N);

    printf("Cadastro: ");
    for(int i = 0; i < N; i++)
    {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: %s\n", Vetor[i].nome);
        printf("Idade: %d\n", Vetor[i].idade);
        printf("Endereco: %s\n", Vetor[i].endereco);
    }
    return 0;
}