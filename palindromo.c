/*Programa para determinar se um número é palíndromo ou não*/


#include <stdio.h>

void determinaPalindromo(int n, int ajudante, int trocador);

int main()
{
    int n, ajudante, trocador;
    

    determinaPalindromo(n, ajudante, trocador);
    
    return 0;
}

void determinaPalindromo(int n, int ajudante, int trocador)
{
    n = 1;
    
    while (n > 0)
    {
        printf("Digite um número inteiro ou 0 para finalizar:\n");
        scanf("%d", &n);
    
        ajudante = n;
        trocador = 0;
    
        while (ajudante != 0)
        {
            trocador = trocador*10 + ajudante%10;
            ajudante = ajudante/10;
        }
        if (trocador == n)
        {
            printf("Número palíndromo.\n");
        }
        else
        {
            printf("Número não palíndromo.\n");
        }
    }
}