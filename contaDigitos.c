/*Programa para contar os digítos de um número*/


#include <stdio.h>

int Digito(int N);

int main()
{
    int numero, iterador;
    
    do
    {   
        printf("Digite um número inteiro (0 para finalizar o loop):");
        scanf("%d", &numero);
         
        if (numero != 0)
        {
            iterador = Digito(numero);

            printf("\nO número %d possui %d dígitos.", numero, iterador);
        }
        iterador++;

        printf("\n");
    }
    while(numero != 0);

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