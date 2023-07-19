#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nomeVendedor[10][20];       //Guarda o nome dos vendedores//
    float totalVendas[10];          //Guarda o total de vendas de cada vendedor corresponde//
    float totalComissao[10];        //Guarda a comissão de pagamento de cada vendedor//
    int contador = 0;
    float comissao, soma;
    float pos1, pos2;
    float maior = totalComissao[10], menor = 1000000;
    
    for (contador = 0; contador < 10; contador++)
    {
        printf("Digite o nome do vendedor %d:", contador + 1);
        scanf("%s", &nomeVendedor[contador]);
        
        printf("Digite, em reais, o total de vendas desse vendedor:");
        scanf("%f", &totalVendas[contador]);
        
        printf("Digite o percentual de comissão desse vendedor:");
        scanf("%f", &totalComissao[contador]);
    }
    
    
    printf("Relatório com os nomes dos vendedores e os valores a receber referentes à comissão:\n");
    printf("Nome do vendedor:\t Valores a receber:\n");
    
    for (contador = 0; contador < 10; contador++)
    {
        soma += totalVendas[contador];
        comissao = totalComissao[contador]*totalVendas[contador];
        
        printf(" %s\t\t\t%.2f\n", nomeVendedor[contador], comissao);

        
        if (comissao > maior)
        {
            maior = comissao;
            pos1 = contador;
        }
        else if (comissao < menor)
        {
            menor = comissao;
            pos2 = contador;
        }
    }
    
    printf("O total das vendas de todos os vendedores é igual a R$ %.2f.\n", soma);

    for (contador = 0; contador < 10; contador++)
    {
        if (pos1 == contador)
        {
            printf("O maior valor de comissão é igual a R$ %.2f e quem o receberá será %s.\n", maior, nomeVendedor[contador]);
        }
    }
    for (contador = 0; contador < 10; contador++)
    {
        if (pos2 == contador)
        {
            printf("O menor valor de comissão é igual a R$ %.2f e quem o receberá será %s.\n", menor, nomeVendedor[contador]);
        }
    }
    return 0;

}






























