/*Desenvolva um programa em C que determine o pagamento bruto de cada um de vários
empregados. A companhia paga o valor de uma "hora normal" pelas primeiras 40 horas
trabalhadas de cada empregado e paga o valor de uma "hora extra" (uma vez e meia a hora
normal) para cada hora trabalhada depois de completadas as primeiras 40 horas. Você recebeu
uma lista de empregados da companhia, o número de horas que cada empregado trabalhou
durante a semana passada e o valor da "hora normal" de cada empregado. Seu programa deve
receber essas informações de cada empregado além de determinar e exibir o pagamento bruto
do empregado.*/

#include <stdio.h>


int main()
{
    float pagamento;
    int horas;
    float salario = 0;

    while(pagamento != -1)
    {
        printf("Digite o valor do pagamento por hora(-1 para finalizar):");
        scanf("%f", &pagamento );

        if (pagamento != -1)
        {
            printf("\nDigite a quantidade de horas trabalhadas:");
            scanf("%d", &horas);

            if (horas <= 40)
            {
                salario = pagamento*horas;

                printf("O salario do funcionario e igual a: %.2f", salario);
            }
            else if(horas > 40)
            {
                salario = 40*pagamento + 1.5*(horas - 40)*pagamento;           
                printf("O salario do funcionario e igual a %.2f", salario);

            }
        }
        printf("\n");
    }
    return 0;
}