#include <stdio.h>

int main()
{
    int a;
    int b;
    int *ptra = &a;
    int *ptrb = &b;

    printf("Endereco de a: %p\n", (void *)ptra);
     
    printf("Endereco de b: %p\n", (void *)ptrb);

    if(ptra > ptrb)
    {
        printf("Maior endereco(a): %p", (void *)ptra);
    }
    else
    {
        printf("Maior endereco(b): %p", (void *)ptrb);
    }
    return 0;
}
