
/*Faca um programa que monte os oito primeiros termos da sequencia de Fibonacci.
0 1 1 2 3 5 8 13 21 34 55 … */

#include <stdio.h>
#include <stdlib.h>

int main()
{
      int soma = 1, i = 0, y=1;
          printf("  0  1 ");
      while(y >0 && y < 20){
          y = soma;
          soma += i; 
          i = y;

          printf(" %d ", soma);
        
     }
}
