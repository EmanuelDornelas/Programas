#include <stdio.h>

int *busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s)
{
    if(tam_s == 0)
    {
        return vetor;
    }
    if(tam_s > tam_v)
    {
        return NULL;
    }
    int *fim = vetor + (tam_v - tam_s) + 1;

    for(int *p = vetor; p < fim; p++)
    {
        int *a = p;
        int *b = sub;
        int *fim_sub = sub + tam_s;

        while (b < fim_sub && *a == *b)
        {
            a++;
            b++;
        }
        if(b == fim_sub)
        {
            return p;
        }
    }
    return NULL;
}
int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int sub[3] = {3, 4, 5};

    int *resultado = busca_subvetor(vetor, 5, sub, 3);

    if(resultado != NULL)
    {
        printf("Subvetor encotrado");
    }
    else
    {
        printf("Subvetor nao encontrado");
    }
    return 0;
}