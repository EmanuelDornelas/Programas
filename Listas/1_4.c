#include <stdio.h>

int calcular_idade_dias(int anos, int meses, int dias)
{
    dias = (anos * 365) + (meses * 30) + dias;

    return dias;
}
int main()
{
    int anos;
    int meses;
    int dias;

    printf("Entre com sua idade em anos, meses e dias(Ex: 7 anos, 5 meses e 12 dias): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    int resultado = calcular_idade_dias(anos, meses, dias);

    printf("Sua idade em dias e de: %d", resultado);

    return 0;
}