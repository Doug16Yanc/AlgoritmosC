#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    int primeiro, segundo, terceiro;

    printf("Número \tNúmero ^2 \tNúmero ^3 \tNúmero ^4");

    for (numero = 1; numero <= 10; numero++)
    {
        primeiro = pow(numero, 2);
        segundo = pow(numero, 3);
        terceiro = pow(numero, 4);

        printf("\n%4d\t\t%4d\t\t%7d\t\t%7d\n", numero, primeiro, segundo, terceiro);
    }
    return 0;
}