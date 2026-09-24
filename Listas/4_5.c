#include <stdio.h>
#include <string.h>

struct Data
{
    int dia;
    int mes;
    int ano;

};

struct Pessoa
{
    char nome[100];
    struct Data nascimento;
};
int data_menor(struct Data a, struct Data b)
{
    if(a.ano != b.ano)
    {
        return a.ano < b.ano;
    }
    if(a.mes != b.mes)
    {
        return a.mes < b.mes;
    }
    return a.dia < b.dia;
}
int main()
{
    struct Pessoa pessoas[6];

    for(int i = 0; i < 6; i++)
    {
        printf("Entre com seu nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Entre com sua data de nascimento: (Dia mes ano): ");
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
        getchar();
    }
    int indice_mais_velho = 0;
    int indice_mais_novo = 0;

    for(int i = 1; i < 6; i++)
    {
        if(data_menor(pessoas[i].nascimento, pessoas[indice_mais_velho].nascimento))
        {
            indice_mais_velho = i;
        }
        if(data_menor(pessoas[indice_mais_novo].nascimento, pessoas[i].nascimento))
        {
            indice_mais_novo = i;
        }
    }
    printf("Pessoa mais velha: %s, data: (%02d/%02d/%04d)\n", pessoas[indice_mais_velho].nome, pessoas[indice_mais_velho].nascimento.dia, pessoas[indice_mais_velho].nascimento.mes, pessoas[indice_mais_velho].nascimento.ano);
    printf("Pessoa mais nova: %s, data: (%02d, %02d, %04d)", pessoas[indice_mais_novo].nome, pessoas[indice_mais_novo].nascimento.dia, pessoas[indice_mais_novo].nascimento.mes, pessoas[indice_mais_novo].nascimento.ano);

    return 0;
}
