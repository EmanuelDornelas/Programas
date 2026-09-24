#include <stdio.h>
#include <string.h>

struct dados
{
    char nome[100];
    int idade;
    char endereco[150];
};

int main()
{
    struct dados dados;

    printf("Entre com o nome: ");
    fgets(dados.nome, sizeof(dados.nome), stdin);
    dados.nome[strcspn(dados.nome, "\n")] = '\0';

    printf("Entre com a idade: ");
    scanf("%d", &dados.idade);
    getchar();

    printf("Entre com o endereco: ");
    fgets(dados.endereco, sizeof(dados.endereco), stdin);
    dados.endereco[strcspn(dados.endereco, "\n")] = '\n';

    printf("Dados: ");
    printf("\nNome: %s", dados.nome);
    printf("\nIdade: %d", dados.idade);
    printf("\nEndereco: %s", dados.endereco);

    return 0;
}