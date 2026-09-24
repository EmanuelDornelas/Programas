#include <stdio.h>
#include <string.h>

int calcular_operacao(int a, char operacao, int b)
{
    switch (operacao)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if(b == 0)
        {
            printf("Erro, divisao por 0");
            return 0;
        }
        return a / b;
    default:
        printf("Operador invalido");
        return 0;
    }
}
int main()
{
    int a, b;
    char operacao;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);

    printf("Entre com a operacao a ser feita: ");
    scanf(" %c", &operacao);

    printf("Entre com o valor de b: ");
    scanf("%d", &b);

    printf("Resultado: %d", calcular_operacao(a, operacao, b));

    return 0;
}