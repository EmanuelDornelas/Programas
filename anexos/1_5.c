#include <stdio.h>

int eh_perfeito(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(n > 0 && sum == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;

    printf("Entre com um numero para verificar se e perfeito ou nao: ");
    scanf("%d", &n);

    if(eh_perfeito(n))
    {
        printf("O numero %d e perfeito", n);
    }
    else
    {
        printf("O numero %d nao e perfeito", n);
    }
    return 0;
}