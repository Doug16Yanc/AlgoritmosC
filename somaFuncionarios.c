#include <stdio.h>


int main()
{
    int ID, quantidade;
    double precoPorItem, salarioComissao;

    while (ID != -1)
    {
        printf("Digite o ID do produto (-1 para finalizar):\n");
        scanf("%d", &ID);

        if (ID != -1)
        {

            printf("\nDigite, em reais, o preço do item:\n");
            scanf("%lf", &precoPorItem);

            printf("\nDigite a quantidade de itens vendidos:\n");
            scanf("%d", &quantidade );

            salarioComissao = precoPorItem*quantidade;
           
            printf("\nO salário do funcionário será igual a R$ %.2f.\n", salarioComissao);

        }
    }

    return 0;
}