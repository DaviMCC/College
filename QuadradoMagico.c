*/Escreva um algoritmo que recebe do usuário uma matriz quadrada de tamanho máximo 10x10 suas dimensõesne N e
 determina se ela é um quadrado mágico escrevendo “Quadrado mágico” ou “Quadrado apenas” caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int l, c, linhaqntd,colunaqtd, input, teste = 0;

    printf("Qual a quantidade de linhas a matriz deve ter? *MAXIMO DEZ*\n");
    scanf("%d", &input);
    if(input <= 10)
    {
        linhaqntd = input;
    }
    else
    {
        printf("Erro, valor digitado eh maior que 10");
        exit(0);
    }
    printf("Qual a quantidade de colunas a matriz deve ter? *MAXIMO DEZ*\n");
    scanf("%d", &input);
    if(input <= 10)
    {
        colunaqtd = input;
    }
    else
    {
        printf("Erro, valor digitado eh maior que 10");
        exit(0);
    }

    int matriz[linhaqntd][colunaqtd];

    printf("Digite os valores da matriz para saber se eh um quadrado magico ou um quadrado simples");

    for(l = 1; l <= linhaqntd; l++)
    {
        for(c = 1; c <= colunaqtd; c++)
        {
            printf("\nElemento na linha [%d] e coluna [%d] = ", l, c);
            scanf("%d", &matriz[l][c]);
        }
        system("cls");
    }
    printf("A matriz inserida foi: \n");
    for(l = 1; l <= linhaqntd; l++){
        for(c = 1; c <= colunaqtd; c++)
        {

            printf("|%d|", matriz[l][c]);
        }
        printf("\n");
    
    
    }
    
    int somadiag1 = 0, somadiag2 = 0;
    
    for (l = 1; l <= linhaqntd; l++) {
		somadiag1 += matriz[l][l];
	}
	
   for(l = 1; l <= linhaqntd; l++){
	    somadiag2 += matriz[l][linhaqntd - (l - 1)];
	}

   if(somadiag1 == somadiag2){
       int vetLin[linhaqntd];
       for(l = 1; l <= linhaqntd; l++){
           vetLin[l] = 0;
           for(c = 1; c <= colunaqtd; c++){
               vetLin[l] += matriz[l][c];
           }
     int vetCol[colunaqtd];
      for(c = 1; c <= colunaqtd; c++){
          vetCol[c] = 0;
          for(l = 1; l <= linhaqntd; l++){
              vetCol[c] += matriz[l][c];
          }
          for(l = 1; l <= colunaqtd; l++){
              if(vetLin[1] == vetCol[1]){
                  teste = 1;
          }
          }
      }
      if(teste == 1){
              printf("Quadrado magico");
          }else if(teste == 0){
              printf("Quadrado comum");
          }
       }
   }else{
       printf("Não é um quadrado magico");
   }

return 0;
}
