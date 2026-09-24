#include <stdio.h>
#include <string.h>

struct Aluno
{
    int matricula;
    char nome[100];
    float notas[3];
};
int main()
{
    struct Aluno alunos[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Aluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        for(int j = 0; j < 3; j++)
        {
            printf("Nota: ");
            scanf("%f", &alunos[i].notas[j]);
        }
        getchar();
    }
    int indice_maior = 0;
    float maior_media = (alunos[0].notas[0] + alunos[0].notas[1] + alunos[0].notas[2]) / 3;

    for(int i = 1; i < 5; i++)
    {
        float media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;

        if(media > maior_media)
        {
            maior_media = media;
            indice_maior = i;
        }
    }
    printf("Aluno com a maior media geral: \n");
    printf("Nome: %s\n", alunos[indice_maior].nome);
    printf("Notas: %.2f, %.2f, %.2f\n", alunos[indice_maior].notas[0], alunos[indice_maior].notas[1], alunos[indice_maior].notas[2]);
    printf("Media: %.2f", maior_media);

    return 0;
}