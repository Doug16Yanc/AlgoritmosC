#include <stdio.h>

int main()
{
    int numero;
    int fator = 1;

    printf("%4s%4s\n", "Número", "Fatorial");

    for (numero = 1; numero <= 10; numero++)
    {
        fator *= numero;

        printf("%4d\t%4d\n", numero, fator);
    }
    return 0;
}