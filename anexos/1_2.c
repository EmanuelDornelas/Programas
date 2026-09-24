#include <stdio.h>
#include <math.h>

float calcular_bhaskara_1(float a, float b, float c) 
{
    float delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) 
    {
        return 0.0;
    }

    float xum = (-b + sqrt(delta)) / 2 * a;

    return xum;
}
float calcular_bhaskara_2(float a, float b, float c)
{
    float delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) 
    {
        return 0.0;
    }

    float xdois = (-b - sqrt(delta)) / 2 * a;

    return xdois;
}
int main()
{
    float a, b, c;

    printf("Entre com os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    float raiz_1 = calcular_bhaskara_1(a, b, c);

    float raiz_2 = calcular_bhaskara_2(a, b, c);

    printf("Raiz 1: %f, raiz 2: %f", raiz_1, raiz_2);

    return 0;
}