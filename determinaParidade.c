/*Programa que determina a paridade da quantidade de dígitos de um número*/

#include <stdio.h>

int Digito(int N);

int main()
{
    int numero, iterador;

    printf("Digite um número inteiro (0 para finalizar o loop):");
    scanf("%d", &numero);

    while(numero > 0)
    {
         
        if (numero > 0)
        {
            iterador = Digito(numero);

            if (iterador % 2 == 0)
            {
                printf("\nO número %d possui quantidade de dígitos par.");

            }
            else
            {
                printf("\nO número %d possui quantidade de dígitos ímpar.", numero);
            }
            iterador++;

        }
        printf("\nDigite um número inteiro (0 para finalizar o loop):");
        scanf("%d", &numero);
    }
    return 0;
}

int Digito(int N)
{
    int iterador = 1;

    if (N >= 10)
    {
        N = N / 10;
        iterador += Digito(N);
    }
    return iterador;
}