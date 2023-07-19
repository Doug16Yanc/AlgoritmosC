#include <stdio.h>

/*Protótipo das funções*/

void guardaDados(char sexo[5][10], char corOlhos[5][10], char corCabelos[5][10], int idade[5], int contador);

void calculaMediaIdade(char corOlhos[5][10], char corCabelos[5][10], int idade[5], int contador);

int calculaMaiorIdade(int idade[5], int contador);

void calculaQuantidade(char sexo[5][10], char corOlhos[5][10], char corCabelos[5][10], int idade[5], int contador);

/*Declaração de variável global contador para não usar ponteiros*/


/*Escopo da função principal*/

int main()
{
    char sexo[5][10], corOlhos[5][10], corCabelos[5][10];
    int idade[5], contador;
    
    guardaDados(sexo, corOlhos, corCabelos, idade, contador);
    
    calculaMediaIdade(corOlhos, corCabelos, idade, contador);
    
    calculaMaiorIdade(idade, contador);
    
    calculaQuantidade(sexo, corOlhos, corCabelos, idade, contador);

    return 0;
}

/*Implementação prática das funções*/


void guardaDados(char sexo[5][10], char corOlhos[5][10], char corCabelos[5][10], int idade[5], int contador)
{
    
    printf("Digite os dados dos habitantes de acordo com a tabela:\n");
    printf("----------------------------------------------------------\n");
    printf("Sexo\tCor dos olhos\tCor dos cabelos\tIdade(número):\n");
    printf("------------------------------------------------------------\n");
    printf("M-masculino\tA-azuis\t\tL-louros\t\t------------\n");
    printf("F-feminino\tC-castanhos\t\tP-pretos\t\t----------\n");
    printf("------\t------------\t\tC-castahos\t\t----------\n");
    printf("-----------------------------------------\n");
    
    for (contador = 0; contador < 5; contador++)
    {
        printf("Digite o sexo do habitante %d:", contador + 1);
        scanf("%s", &sexo[contador]);
        
        printf("Digite a cor dos olhos desse habitante:");
        scanf("%s", &corOlhos[contador]);
        
        
        printf("Digite a cor do cabelo desse habitante:");
        scanf("%s", &corCabelos[contador]);
        
        printf("Digite, em anos, a idade desse habitante:");
        scanf("%d", &idade[contador]);
        
    }
}

void calculaMediaIdade(char corOlhos[5][10], char corCabelos[5][10], int idade[5], int contador)
{
    int somaDasIdades, contador1 = 0;  /*O contador1 itera a quantidade de acordo com o cumprimento da execucção condicional*/
    float MediadasIdades = 0;

    for (contador = 0; contador < 5; contador++)
    {
        if (corOlhos[contador] == "C" && corCabelos[contador] == "P")
        {
            somaDasIdades += idade[contador];
            contador1 += 1;
        }
    }
    MediadasIdades = somaDasIdades/contador1;


    printf("A média de idade das pessoas que têm olhos castanhos e cabelos pretos é igual a %.1f.\n", MediadasIdades);


}


int calculaMaiorIdade(int idade[5], int contador)
{
    int maiorIdade = idade[5], posMaior;
    
    for (contador = 0; contador < 5; contador++)
    {
        if (idade[contador] > maiorIdade)
        {
            maiorIdade = idade[contador];
            posMaior = contador;
        }
    }
    for (contador = 0; contador < 5; contador++)
    {
        if (posMaior == contador)
        {
            printf("A maior idade entre todos os habitantes é igual a %d.\n", maiorIdade);
        }
    }
    return maiorIdade;
}

void calculaQuantidade(char sexo[5][10], char corOlhos[5][10], char corCabelos[5][10], int idade[5], int contador)
{
    int quantidade = 0;
    

    for (contador = 0; contador < 5; contador++)
    {
        if ((sexo[contador] == "F") && (idade[contador] >= 18 && idade[contador] <= 35) && (corOlhos[contador] == "A") && (corCabelos[contador] == "L"))
        {
            quantidade += 1;
        }
    }
    printf("A quantidade de indivíduos do sexo feminino com idade entre 18 e 35 anos (inclusive) e que têm olhos azuis e cabelos loiros é igual a %d.", quantidade);

}



