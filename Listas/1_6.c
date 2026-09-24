#include <stdio.h>

void retornar_conceito(int media)
{
    if(media >= 9)
    {
        printf("A");
    }
    else if (media >= 7 && media <= 8.9)
    {
        printf("B");
    }
    else if (media >= 5 && media <= 6.9)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }
}
int main()
{
    int media;

    printf("Entre com a media final: ");
    scanf("%d", &media);

    retornar_conceito(media);

    return 0;
}