#include <stdio.h>

int main()
{
    int a, *b, **c, ***d;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);

    b = &a;

    c = &b;

    d = &c;

    int dobro = *b * 2;

    int triplo = **c * 3;

    int quadruplo = ***d * 4;

    printf("Dobro: %d\n", dobro);

    printf("Triplo; %d\n", triplo);

    printf("Quadruplo: %d\n", quadruplo);

    return 0;
}