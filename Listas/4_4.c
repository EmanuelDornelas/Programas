#include <stdio.h>

struct Hora
{
    int hora;
    int minutos;
    int segundos;
};
int main()
{
    struct Hora horas[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Hora %d:\n ", i + 1);

        printf("Horas: ");
        scanf("%d", &horas[i].hora);

        printf("Minutos: ");
        scanf("%d", &horas[i].minutos);

        printf("Segundos: ");
        scanf("%d", &horas[i].segundos);
    }
    int indice_maior = 0;

    for(int i = 0; i < 5; i++)
    {
        if(horas[i].hora > horas[indice_maior].hora || (horas[i].hora == horas[indice_maior].hora && horas[i].minutos > horas[indice_maior].minutos) || (horas[i].hora == horas[indice_maior].hora && horas[i].minutos == horas[indice_maior].minutos && horas[i].segundos > horas[indice_maior].segundos))
        {
            indice_maior = i;
        }
    }
    printf("Maior hora: %02d:%02d:%02d", horas[indice_maior].hora, horas[indice_maior].minutos, horas[indice_maior].segundos);
    
    return 0;
}