#include <stdio.h>

void conversao_tempo(float segundos)
{
    float minutos = segundos / 60;

    float horas = segundos / 3600;

    printf("%.2f horas, %.2f minutos", horas, minutos);
}
int main()
{
    float tempo;

    printf("Entre com o tempo em segundos: ");
    scanf("%f", &tempo);

    conversao_tempo(tempo);

    return 0;
}