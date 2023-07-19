#include <stdio.h>

int main()
{
    int vetor[7];
    int contador;
    
    for (contador = 0; contador < 7; contador++)
    {
        printf("Digite o número %d: ", contador + 1);
        scanf("%d", &vetor[contador]);
    }
    for (contador = 6; contador >= 0; contador--)
    {
        printf("%d\t", vetor[contador]);
    }
    return 0;

}