#include <stdio.h>

struct Aluno
{
    int matricula;
    char nome[100];
    int notas[3];
};
int main()
{
    int x = sizeof(struct Aluno);

    printf("Tamanho da estrutura: %d", x);
    
    return 0;
}
