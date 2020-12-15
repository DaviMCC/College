#include <stdio.h>

int main ()
{
    int resp1, resp2, resp3, unidades = 0, itens = 0, ped = 0, torneira = 0, pia = 0, banco = 0, fita = 0, chave = 0, i, prodmaisvendido = 0, cod = 0;
    float preco;
    system("cls");
    do
    {
        printf("--------OPCOES---------");
        printf("\n[1] - Emitir relatorio de vendas");
        printf("\n[2] - Fazer novo pedido\n");
        scanf("%d", &resp3);
        if(resp3 == 1)
        {
            system("cls");
            printf("---------RELATORIO DE VENDAS------------");
            printf("\nTotal vendido: %.2f", preco );
            printf("\nTotal vendido por produto: Torneira: %d, Pia: %d, Banco: %d, Fita: %d, Chave: %d", torneira,pia, banco, fita, chave);
            printf("\nTotal de pedidos processados: %d ", ped);
            for(i = 1; i != 5; i++)
            {
                if(torneira > prodmaisvendido)
                {
                    prodmaisvendido = torneira;
                    cod = 1;
                }
                if(pia > prodmaisvendido)
                {
                    prodmaisvendido = pia;
                    cod = 2;
                }
                if(banco > prodmaisvendido)
                {
                    prodmaisvendido = banco;
                    cod = 3;
                }
                if(fita > prodmaisvendido)
                {
                    prodmaisvendido = fita;
                    cod = 4;
                }
                if(chave > prodmaisvendido)
                {
                    prodmaisvendido = chave;
                    cod = 5;
                }
            }
            printf("\nCodigo do produto mais vendido: %d", cod);
            printf("\n---------------------------------------");
        }
        else if(resp3 == 2)
        {
            system("cls");
            ped++;
            printf("--------MENU DE PEDIDOS----------");
            printf("\n[1] - Torneira           RS207,00");
            printf("\n[2] - Pia de banheiro    RS 99,00");
            printf("\n[3] - Banco de plastico  RS  8,00");
            printf("\n[4] - Fita adesiva       RS  1,60");
            printf("\n[5] - Chave inglesa      RS 50,00");
            printf("\n[-1]- Encerrar pedido");
            printf("\n**Escolha ate tres itens diferentes**\n");
            for(i = 0; i != 3; i++)
            {
                scanf("%d", &resp2);
                if(resp2 == 1)
                {
                    printf("Quantas unidades de Torneira? ");
                    scanf("%d", &unidades);
                    preco += (unidades * 207.00);
                    itens++;
                    torneira+= unidades;
                }
                else if(resp2 == 2)
                {
                    printf("Quantas unidades de Pia de banheiro? ");
                    scanf("%d", &unidades);
                    preco += (unidades * 99.00);
                    itens++;
                    pia+= unidades;
                }
                else if(resp2 == 3)
                {
                    printf("Quantas unidades de Banco de plastico? ");
                    scanf("%d", &unidades);
                    preco += (unidades * 8.00);
                    itens++;
                    banco += unidades;
                }
                else if(resp2 == 4)
                {
                    printf("Quantas unidades de Fita adesiva? ");
                    scanf("%d", &unidades);
                    preco += (unidades * 1.60);
                    itens++;
                    fita += unidades;
                }
                else if(resp2 == 5)
                {
                    printf("Quantas unidades de Chave inglesa? ");
                    scanf("%d", &unidades);
                    preco += (unidades * 50.00);
                    itens++;
                    chave+= unidades;
                }
            }

        }
    }
    while(resp3 == 2);
    return 0;

}



