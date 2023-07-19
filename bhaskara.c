/*Programa em linguagem C que pede três inputs ao usuário, tais inputs correspondem, respectivamente, aos valores de*/
/*três variáveis presentes em uma equação do segundo grau, a referência bibliográfica é o livro Fundamentos de Matemática*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int delta = 0, raiz1 = 0, raiz2 = 0;

        printf("Digite o valor da primeira variável real a:");
        scanf("%d", &a);
        printf("Digite o valor da segunda variável real b:");
        scanf("%d", &b);

        printf("Digite o valor da terceira variável real c, ou variável independente:");
        scanf("%d", &c);

        delta = ((b*b) - 4*a*c);

        if (delta > 0 )
        {
            if (delta == 0)
            {
                raiz1 = ((-b + sqrt(delta))/2*a);
                
                printf("A raíz única desta equação é %d", raiz1);
            }
            else
            {
                raiz1 = ((-b + sqrt(delta))/2*a);
                raiz2 = ((-b - sqrt(delta))/2*a);

                if (raiz1 > raiz2)
                {
                    printf("As raízes dessa equação são %d && %d", raiz1, raiz2);
                }
                else
                {
                    printf("As raízes dessa equação são %d && %d", raiz1, raiz2);
                }
            }
        }
        else
        {
            
            printf("Esta equação não possui raízes reais.");
        }
        return 0;
}
