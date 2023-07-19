#include <stdio.h>

int main()
{
    float vendas;
    float salario = 0;

    while (vendas != -1)
    {
        printf("Digite a quantidade em dinheiro obitda por esse funcionário por meio de suas vendas(-1 para finalizar):");
        scanf("%f", &vendas);
        salario = 200.00 + 0.09*vendas;

        if(vendas != -1)
        {
            printf("O salário desse funcionário será: %.2f\n", salario);
        }
    }
    return 0;
}