#include <stdio.h>

int main()
{
    int v[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Entre com o valor do vetor: ");
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        if(v[i] % 2 == 0)
        {
            printf("v[%d] = %d, endereco: %p\n", i, v[i], (void *)&v[i]);
        }
    }
    return 0;
}