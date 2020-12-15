*/
Programa para calcular o preço a pagar, e o desconto, de acordo com a quantidade de unidades.    
*/

#include <stdio.h>

int main()
{

    float preco, precoapagar, desconto;
    int unidades;

    printf("---- Calculador de desconto -----\n");
    printf("\nPor favor, digite o preco da unidade do produto: ");
    scanf("%f", &preco);
    printf("\nPor favor, digite quantas unidades serao compradas: ");
    scanf("%d", &unidades);
    if(unidades > 0 && unidades < 11)
    {
        desconto = 0;
        precoapagar = unidades * preco;
        printf("Total com desconto: RS%.2f", precoapagar);
        printf("\nHouve um desconto de: RS%.2f", desconto);
    }
    else if(unidades > 10 && unidades < 21)
    {
        precoapagar = unidades * preco;
        desconto = ((precoapagar) * 10) / 100;
        printf("Total com desconto: RS%.2f", precoapagar);
        printf("\nHouve um desconto de: RS%.2f", desconto);
    }
    else if(unidades > 21 && unidades > 50)
    {
        precoapagar = unidades * preco;
        desconto = ((precoapagar) * 15) / 100;
        printf("Total com desconto: RS%.2f", precoapagar);
        printf("\nHouve um desconto de: RS%.2f", desconto);

    }
    else if(unidades > 50)
    {
        precoapagar = unidades * preco;
        desconto = ((precoapagar) * 20) / 100;
        printf("\nTotal com desconto: RS%.2f", precoapagar);
        printf("Houve um desconto de: RS%.2f", desconto);

    }
    return 0;
}
