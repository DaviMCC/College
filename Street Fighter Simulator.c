/* 
This is basically a Street Fighter Simulator that I developed for my algorithm class at FATEC-CAMP. 
The language used is C.

-You have 2 rounds
-Ken uses negative numbers while Ryu uses positive numbers
-Both characters can give as many attacks as they want but the round is over when any of them enters 0
-If the value entered is a Perfect Number it is multiplied by 3 and if it is a Triangular Number it's multriplied by 2
-The winner will be who gave more damage

/*

#include <stdio.h> 

int perfeito(int golp)      /* Function to verify if the value of the attack is a perfect number */
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
int triangulo(int golp)      /* Function to verify if the value of the attack is a triangular number */
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

void main ()                /* Main */
{
    int i, ryuR, kenR, ryu = 0, ken = 0, aux = 0, golpe;

    printf("-----                Simulador Street Fighter                             ----");          /* Introduction for the user */ 
    printf("\n----- Entre com os valores dos golpes de RYU utilizando numeros positivos ----");
    printf("\n----- Entre com os valores dos golpes de KEN utilizando numeros negativos ----");          
    printf("\n-----             *** PARA ENCERRAR O ROUND ENTRE COM 0 ***               ----");
    printf("\n------------------------------------------------------------------------------");

    for(i = 1; i <= 2; i++)   /* For to control the rounds */
    {
        printf("\n--------------------------------- ROUND %d  -----------------------------------\n", i);
        do                    /* Do While that stops the round when a value 0 is entered */
        {
            scanf("%d", &golpe);
            if(golpe >= 1)
            {
                if((perfeito(golpe)) == 1)
                {
                    ryu += (golpe * 3);       /* Multiplication factor  */
                }
                else if(((triangulo(golpe)) == 1))
                {
                    ryu += (golpe * 2);         /* Multiplication factor  */
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
                    ken += (golpe * 3);        /* Multiplication factor  */
                }
                else if(((triangulo(golpe)) == 1))
                {
                    ken += (golpe * 2);        /* Multiplication factor  */
                }
                else
                {
                    ken += golpe;
                }
            }
        }
        while (golpe != 0);
    aux =  (ken * -1); /* Conversion of the Ken variable */ 
    ken = aux;         /* Atribution of the result */ 
    if(ken > ryu){
        kenR++;        /* Atribution per round */ 
    }else if(ryu > ken){
        ryuR++;
    }
    ryu = 0;           /* Turning the round value to 0 for the new round */
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


