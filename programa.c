#include <stdio.h>

int main()
{
    int opcoesAescolher;
    double salario;
    double imposto = 0, novoSalario = 0, classificacao = 0;
    
    printf("Escolha apenas uma dentre as opções:\n1.Imposto\n2.Novo salário\n3.Classificação\n");
    scanf("%d", &opcoesAescolher);
    
    if (opcoesAescolher != 1 && opcoesAescolher != 2 && opcoesAescolher != 3)
    {
        printf("Entrada inválida, tente novamente.");
    }
    else
    {
        if (opcoesAescolher == 1)
        {
            printf("Digite, em reais, o valor do salário:\n");
            scanf("%lf", &salario);
            
            if (salario < 500)
            {
                imposto = salario*0.05;
                printf("O imposto a ser pago é igual a R$ %.2f.", imposto);
            }
            else if (salario >= 500 && salario <= 850)
            {
                imposto = salario*0.10;
                printf("O imposto a ser pago é igual a R$ %.2f.", imposto);
            }
            else 
            {
                imposto = salario*0.15;
                printf("O imposto a ser pago é igual a R$ %.2f.", imposto);
            }
        }
        if (opcoesAescolher == 2)
        {
            printf("Digite, em reais, o valor do salário:\n");
            scanf("%lf", &salario);
            
            if (salario > 1500)
            {
                novoSalario = salario + 25;
            }
            else
            {
                 if (salario >= 750 && salario <= 1500)
                 {
                      novoSalario = salario + 50;
                 }
                 else
                 {
                     if (salario >= 450 && salario < 750)
                     {
                         novoSalario = salario + 75;
                     }
                     else
                     {
                         novoSalario = salario + 100;
                     }
                 }
            }
            printf("O novo salário do funcionário será igual a R$ %.2f", novoSalario);

        }
        if (opcoesAescolher == 3)
        {
            printf("Digite, em reais, o valor do salário:\n");
            scanf("%lf", &salario);
            
            if (salario <= 700)
            {
                printf("Mal remunerado!");
            }
            else
            {
                printf("Bem remunerado!");
            }
        }
    } 
    
return 0;
}
            

