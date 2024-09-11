
/* Faca um programa que leia um numero inteiro N e que indique quantos valores inteiros e
positivos devem ser lidos a seguir. Para cada numero lido, mostre uma tabela contendo o valor
lido e o fatorial desse valor. */

#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, j, fat, n, calc;
         printf("\nInsira a quantidade de termos a serem calculados: \n");
      scanf("%d", &n);
   for(i = 1; i<=n; i++)
      {
         printf("\nInsira qual o fatorial desejado: \n");
         scanf("%d", &calc);
            fat = 1;
         for (j = calc; j>=1; j--)
            fat = fat*j;
      
         printf("\nO valor de %d!: %d", calc, fat);
      }
   }

      
