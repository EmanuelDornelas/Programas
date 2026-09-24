#include <stdio.h>

int verificar_texto(char *palavra1, char *palavra2)
{
    for(;*palavra1 != '\0'; palavra1++)
    {
        char *p1 = palavra1;
        char *p2 = palavra2;
        
        while (*p1 == *p2 && *p2 != '\0')
        {
            p1++;
            p2++;
        }
        if(*p2 == '\0')
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char texto1[100];
    char texto2[100];

    printf("Entre com o primeiro texto: ");
    scanf(" %99[^\n]", texto1);

    printf("Entre com o segundo texto: ");
    scanf(" %99[^\n]", texto2);

    if(verificar_texto(texto1, texto2))
    {
        printf("A segunda string ocorre dentro da primeira");
    }
    else
    {
        printf("A segunda string nao ocorre dentro da priemeira");
    }
    return 0;
}