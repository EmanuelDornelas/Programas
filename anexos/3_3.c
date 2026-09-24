#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");
    }
    

    int *ptr = &matriz[0][0];
    int sum = 0;

    for(int i = 0; i < 9; i += 4)
    {
        sum += *(ptr + i);
    }

    printf("A soma dos elementos da diagonal principal e de: %d", sum);

    return 0;
}