#include <stdio.h>
#include <string.h>

struct Atleta
{
    char nome[100];
    char esporte[100];
    int idade;
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
        getchar();
    }
    int temp;

    for(int i = 0; i < 5 - 1; i++)
    {
        for(int j = 0; j < 5 - 1; j++)
        {
            if(atletas[j].idade < atletas[j + 1].idade)
            {
                struct Atleta temp = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = temp;
            }
        }
    }
    printf("Atletas por ordem de idade(Do mais velho ao mais novo): ");
    for(int i = 0; i < 5; i++)
    {
        printf("%s possui %d anos\n", atletas[i].nome, atletas[i].idade);
    }
    return 0;
}