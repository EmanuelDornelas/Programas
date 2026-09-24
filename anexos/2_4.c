#include <stdio.h>

// int main()
// {
//     float m[3][3];

//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             printf("%p ", (void *)*(m + i) + j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    float m[3][3];

    float *pm = &m[0][0];

    for(int i = 0; i < 9; i ++)
    {
        printf("Endereco do elemento %d: %p\n", i, (void *)(m + i));
    }
    return 0;
}