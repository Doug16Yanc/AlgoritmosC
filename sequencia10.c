#include <stdio.h>

int main()
{
    int numero;
    int primeiro, segundo, terceiro;
    
    
    printf("N\tN*10\tN*100\tN*1000\t");

    for(numero = 1; numero <= 10; numero++)
    {
        primeiro = numero*10;
        segundo = numero*100;
        terceiro = numero*1000;
             
        printf("\n%4d\t%4d\t%4d\t%4d\n", numero, primeiro, segundo, terceiro);
    
    }
    return 0;
}