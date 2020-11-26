
#include <stdio.h>


int perfeito(int golp)       /* Fun��o para verificar se o valor do golpe � perfeito ou n�o, recebe o golpe digitado como argumento e retorna 1 ou 0 dependendo do resultado */
{
    int i,somaDiv, aux;
    aux = 0;
    for(i = 1; i <golp; i++)
    {
        if(golp%i == 0)
        {
            aux += i;
        }
    }
    if(aux == golp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int triangulo(int golp)      /* Fun��o para verificar se o valor do golpe � um triangulo ou n�o, recebe o golpe digitado como argumento e retorna 1 ou 0 dependendo do resultado */
{
    int aux, i;
    for(i = 1, aux = 0; (i*(i+1)*(i+2)) < golp+1; i++)
    {
        if((i*(i+1)*(i+2)) == golp)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void main ()                /* Main, aonde acontece a entrada de golpes, resultado, verifica��es de resultado e atribui��es */
{
    int i, ryuR, kenR, ryu = 0, ken = 0, aux = 0, golpe;

    printf("-----                Simulador Street Fighter                             ----");
    printf("\n----- Entre com os valores dos golpes de RYU utilizando numeros positivos ----");
    printf("\n----- Entre com os valores dos golpes de KEN utilizando numeros negativos ----");
    printf("\n-----             *** PARA ENCERRAR O ROUND ENTRE COM 0 ***               ----");
    printf("\n------------------------------------------------------------------------------");

    for(i = 1; i <= 2; i++)   /* For para controlar a repeti��o de rounds, no caso dois rounds */
    {
        printf("\n--------------------------------- ROUND %d  -----------------------------------\n", i);
        do                    /* Do que s� para quando o usu�rio finaliza o round digitando 0 */
        {
            scanf("%d", &golpe);
            if(golpe >= 1)
            {
                if((perfeito(golpe)) == 1)
                {
                    ryu += (golpe * 3);       /* Condi��o de multiplica��o */
                }
                else if(((triangulo(golpe)) == 1))
                {
                    ryu += (golpe * 2);        /* Condi��o de multiplica��o */
                }
                else
                {
                    ryu += golpe;
                }
            }
            else if(golpe < 0)
            {
                if((perfeito(golpe)) == 1)
                {
                    ken += (golpe * 3);       /* Condi��o de multiplica��o */
                }
                else if(((triangulo(golpe)) == 1))
                {
                    ken += (golpe * 2);       /* Condi��o de multiplica��o */
                }
                else
                {
                    ken += golpe;
                }
            }
        }
        while (golpe != 0);
    aux =  (ken * -1); /* Convers�o do valor da variavel ken (� negativa, e se torna positiva para verifica��o do vencedor) */
    ken = aux;         /* Atribui��o da convers�o */
    if(ken > ryu){
        kenR++;        /* Atribui��o de vitoria por round */
    }else if(ryu > ken){
        ryuR++;
    }
    ryu = 0;           /* Zerando pontua��o de golpes para o novo round que iniciara */
    ken = 0;
    }

    printf("                -------------- RESULTADO -----------------\n");
    if(kenR > ryuR)
    {
        printf("              Vitoria de KEN (Ken: %d Ryu: %d)", kenR, ryuR);
    }
    else if(ryuR > kenR)
    {
        printf("                  Vitoria de RYU (Ken: %d Ryu: %d)", kenR, ryuR);
    }
    else if(ryuR == kenR)
    {
        printf("                          Empate!(Ken: %d Ryu: %d)", kenR, ryuR);
    }
    printf("\n                ------------------------------------------");
    printf("\n------------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------------");

}


