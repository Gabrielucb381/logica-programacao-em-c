#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

/*– Faça um programa que receba três números obrigatoriamente em ordem e um
quarto número que não siga esta regra. Mostre, em seguida, os quatro números em
ordem decrescente.*/

int main (){

     setlocale(LC_ALL,"Portuguese");

     float num1, num2, num3, num4;

     system("cls");
     printf("digite 3 numeros em ordem crescente: ");
     scanf("\n%f", &num1);
     scanf("\n%f", &num2);
     scanf("\n%f", &num3);

     printf("\nDigite um numero: (fora de ordem)");
     scanf("\n%f", &num4);

     if  (num4 > num3)
     printf("%f, %f, %f, %f", num4, num3, num2, num1);
     else if (num4 > num2 && num4 < num3)
          printf("%f,%f,%f,%f", num3, num4, num2, num1);
          else if (num4 > num1 && num4 < num2)
               printf("%f, %f, %f, %f", num3, num2, num4, num1);
               else
                    printf("%f,%f,%f,%f", num3, num2, num1, num4);

     getch();
}