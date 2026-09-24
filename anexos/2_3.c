#include <stdio.h>

int main()
{
    float v[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Endereco de v[%d]: %p\n", i, (void *)(v + i));
    }
    return 0;
}