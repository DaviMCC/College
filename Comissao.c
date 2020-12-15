/* 
Programa que calcula o valor da comissão em cima do valor digitado.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float comis, val;
    printf("----Calculadora de Comissao----");
    printf("\nPor favor, digite um valor acima de 39,00\n");
    scanf("%f", &val);
    if (val >= 39){
        if(val <= 2500){
        comis = 30 + ((1.7/100) * val);
        }else if(val <= 6250){
            comis = 56 + ((0.66/100) * val);
        }else if(val <= 20.000){
            comis = 76 + ((0.34/100) * val);
        }else if(val <= 50.000){
            comis = 100 + ((0.22/100) * val);
        }else if(val <= 500000){
            comis = 155 + ((0.11/100) * val);
        }else{
            comis = 255 + ((0.09/100) * val);
        }
    }else{
            printf("Digite um valor maior que 39.");
    }
    printf("Valor da comissão:%.2f", comis);
    return 0;
}

