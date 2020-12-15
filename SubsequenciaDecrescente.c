*/ Um programa que recebe como entrada uma sequência de inteiros não negativos, seguidos deum inteiro negativo indicando o fim da sequência. 
O programa determina o comprimento da maior subsequênciaestritamente decrescente (excluindo o número negativo que indica o fim da sequência). 
/*

#include <stdio.h>

int main()
{
    int atual = 0, aux = 0, num,  sequencia = 0, continuidade = 0;
    printf("     *** Digite uma sequencia de numeros positivos *** ");
    printf("\n *** Para encerrar a sequencia digite um numero negativo *** \n");
    do                                    /* DO WHILE para controlar a repetição */
    {
        scanf("%d", &num);
        aux = atual;                      /* A Auxiliar funciona como Anterior, antes do  Atual receber o novo numero digitado. */
        atual = num;                      /* A Auxiliar recebe a Atual, e a Auxiliar passa a ser entao a Anterior quando o Atual é atualizado */
        if(atual < aux)                   /* Caso o valor da Atual seja menor que o valor do anterior, o contador da sequencia recebe +1 */
        {
            sequencia++;
        }
        else if(atual > aux)              /* No caso da variavel atual possuir o valor maior que o valor do numero Anterior o contador de sequencia é zerado */
        {
            if(continuidade < sequencia)  /* Porem, se o valor da continuidade for menor que o da sequencia, a continuidade recebe o valor da sequencia, funcionando também como uma auxiliar. */
            {
                continuidade = sequencia;
            }
            sequencia = 0;

        }
    }
    while(num > -1);
    if(sequencia > continuidade)           /* Se o valor da pontuação da var sequencia não for zerado, será maior que o da var auxiliar e poderá ser usado para mostrar o resultado */
    {
        printf("A maior subsequencia estritamente decrescente possui %d elementos", sequencia );
    }
    else
    {
        printf("A maior subsequencia estritamente decrescente possui %d elementos", continuidade + 1); /* Caso contrário, a auxiliar Continuidade terá o valor da sequenciação maior salvo e mostrará o resultado */
    }
}
