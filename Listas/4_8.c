#include <stdio.h>
#include <string.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};
int main()
{
    struct Data data1, data2;
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Entre com a primeira data (Dia/Mes/Ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    
    printf("Entre com a segunda data (Dia/Mes/Ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    long total1 = 0;
    total1 += (long) data1.ano * 365;
    for (int m = 0; m < data1.mes - 1; m++)
    {
        total1 += diasPorMes[m];
    }
    total1 += data1.dia;

    long total2 = 0;
    total2 += (long) data2.ano * 365;
    for (int m = 0; m < data2.mes - 1; m++)
    {
        total2 += diasPorMes[m];
    }
    total2 += data2.dia;

    long diferenca = labs(total2 - total1);

    printf("\nDias decorridos entre as duas datas: %ld\n", diferenca);

    return 0;
}
