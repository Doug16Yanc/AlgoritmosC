#include <stdio.h>

int main()
{
    int numero;

    for (numero = 1; numero <= 3000000; numero++)
    {
        if (numero % 1000000 == 0)
        {
            printf(" %d ", numero);
        }
    }
    return 0;
}