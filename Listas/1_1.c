#include <stdio.h>
#include <math.h>
#define PI 3.1415

float calcular_volume_esfera(int raio)
{
    float volume = ((4.0 * PI) / 3.0) * pow(raio, 3);

    return volume;
}

int main()
{
    float raio = 2;

    float resultado = calcular_volume_esfera(raio);

    printf("%.2f", resultado);

    return 0;
}