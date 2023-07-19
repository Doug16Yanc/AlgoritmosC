#include <stdio.h>

int main()
{
    int tempAltura;
    int tempLargura;
    int altura;
    int largura;

    printf("Digite a altura do quadrilátero(restrito a ser quadrado ou retângulo), desde que o input seja menor que ou igual a 30:");
    scanf("%d", &tempAltura);

    printf("Digite a largura do quadrilátero(restrito a ser quadrado ou retângulo), desde que o input seja menor que ou igual a 30:");
    scanf("%d", &tempLargura);

    if (tempAltura > 30 || tempLargura > 30 )
    {
        printf("Erro, tente novamente.");
    }
    else
    {
        for (altura = 0; altura < tempAltura; altura++)
        {
            for (largura = 0; largura < tempLargura; largura++)
            {
                if (altura == 0 || largura == 0 || altura == tempAltura - 1 || largura == tempLargura - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                printf("");
            }
            printf("\n");
        }
    }
    return 0;
}