#include <stdio.h>

int main(void)
{
    int dias;
    float capital;
    float taxa;
    
    float juros = 1;


    while (capital != -1)
    {
        printf("Digite o valor do emprestimo ou pressione -1 a fim de finalizar:");
        scanf("%f", &capital);

        if(capital != -1)
        {
             printf("Digite a taxa de juros:");
             scanf("%f", &taxa);

             printf("Digite a quantidade de dias da aplicação:");
             scanf("%d", &dias);
             
             juros = (capital*taxa*dias)/365;
             
             printf("O valor do juro para esse capital é: %.2f\n", juros);

        }             
    }
    return 0;
}