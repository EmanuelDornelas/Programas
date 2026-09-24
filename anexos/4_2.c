#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
};

struct Retangulo
{
    struct Ponto superior_esquerdo;
    struct Ponto inferior_direito;
};
int main()
{
    struct Retangulo r;

    printf("Ponto superior esquerdo:\n");
    printf("  X: ");
    scanf("%f", &r.superior_esquerdo.x);
    printf("  Y: ");
    scanf("%f", &r.superior_esquerdo.y);

    printf("Ponto inferior direito:\n");
    printf("  X: ");
    scanf("%f", &r.inferior_direito.x);
    printf("  Y: ");
    scanf("%f", &r.inferior_direito.y);

    float largura = fabs(r.inferior_direito.x - r.superior_esquerdo.x);
    float altura = fabs(r.superior_esquerdo.y - r.inferior_direito.y);

    float area = largura * altura;
    float perimetro = 2 * (largura + altura);
    float diagonal = sqrt(largura * largura + altura * altura);

    printf("\nArea: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
