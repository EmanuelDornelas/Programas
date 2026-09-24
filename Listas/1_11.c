#include <stdio.h>

void tipoTriangulo(double x, double y, double z)
{
    if ((x <= 0) || (y <= 0) || (z <= 0) || (x >= y + z) || (y >= x + z) || (z >= x + y))
    {
        printf("Os valores nao formam um triangulo.\n");
    }
    else if (x == y && y == z)
    {
        printf("Triangulo equilatero.\n");
    }
    else if (x == y || x == z || y == z)
    {
        printf("Triangulo isosceles.\n");
    }
    else
    {
        printf("Triangulo escaleno.\n");
    }
}

int main()
{
    int x, y, z;

    printf("Informe o lado X: ");
    scanf("%d", &x);

    printf("Informe o lado Y: ");
    scanf("%d", &y);

    printf("Informe o lado Z: ");
    scanf("%d", &z);

    tipoTriangulo(x, y, z);

    return 0;
}