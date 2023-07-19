#include <stdio.h>

int main()
{
    int tempAltura;
    int tempLargura;
    int altura;
    int largura;

    printf("Digite o valor da altura, desde que esta seja menor que ou igual a 30:");
    scanf("%d", &tempAltura);

    printf("Digite o valor da largura, desde que esta seja menor que ou igual a 30:");
    scanf("%d", &tempLargura);

    if (tempAltura > 30 || tempLargura > 30)
    {
        printf("Quaisquer que sejam as entradas, elas não podem ser maiores que 30, conforme restrição inicial, tente novamente.");
    }
    else
    {
        for (altura = 1; altura <= tempAltura; altura++)
        {
            for(largura = tempLargura - altura; largura >= 1; largura--)
                printf("");
            for (largura = 1; largura <= altura; largura++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
    
