#include <stdio.h>
#define PI 3.1415

void calcular_esfera(float raio, float *area, float *volume)
{
    *area = 4 * PI * raio * raio;

    *volume = (4.0/ 3.0) * PI * raio * raio * raio;
}
int main()
{
    float raio;
    float area;
    float volume;

    printf("Entre com o raio da esfera: ");
    scanf("%f", &raio);

    calcular_esfera(raio, &area, &volume);

    printf("Area: %.2f um²\n", area);

    printf("Volume: %.2f um³", volume);

    return 0;
}