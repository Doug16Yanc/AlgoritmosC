#include <stdio.h>

int main()
{
    int numero, numeroDeDivisores, candidatoADivisor;

    numeroDeDivisores = 1;
    candidatoADivisor = 2;

    printf("Por favor, digite um numero inteiro:");
    scanf("%d", &numero);

    while (candidatoADivisor <= numero)
    {
        if (numero % candidatoADivisor == 0)
            numeroDeDivisores += 1;
            candidatoADivisor += 1;
    }
    if (numeroDeDivisores == 2)
        printf("E primo sim!");
    else
        printf("Nao e primo!");

    return 0;
}