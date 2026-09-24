#include <stdio.h>
#include <string.h>

struct Atleta
{
    char nome[100];
    char esporte[100];
    int idade;
    float altura;
};
int main()
{
    struct Atleta atletas[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Entre com seu nome: ");
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';
        

        printf("Entre com seu esporte: ");
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';
        

        printf("Entre com sua idade: ");
        scanf("%d", &atletas[i].idade);
        

        printf("Entre com sua altura: ");
        scanf("%f", &atletas[i].altura);
        getchar();
    }
    int indice_mais_velho = 0;
    int indice_mais_alto = 0;

    for(int i = 1; i < 5; i++)
    {
        if(atletas[i].idade < atletas[indice_mais_velho].idade)
        {
            indice_mais_velho = i;
        }
        if(atletas[i].altura < atletas[indice_mais_alto].altura)
        {
            indice_mais_alto = i;
        }
    }
    printf("Atleta mais velho: %s, idade: %d", atletas[indice_mais_velho].nome, atletas[indice_mais_velho].idade);
    printf("Atleta mais alto: %s, altura: %f", atletas[indice_mais_alto].nome, atletas[indice_mais_alto].altura);

    return 0;
}
