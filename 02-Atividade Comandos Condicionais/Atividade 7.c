#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*Faça um programa que receba quatro valores, I, A, B e C. I é um valor inteiro e
positivo e A, B, C são valores reais. Escreva os números A, B, e C obedecendo a
tabela a seguir. Supondo que o valor digitado para I seja sempre um valor válido, ou
seja, 1, 2 ou 3.

| Valor de I | Forma de Escrever                        |
|------------|------------------------------------------|
| 1          | A, B e C em ordem crescente              |
| 2          | A, B e C em ordem decrescente            |
| 3          | O maior fica entre os outros dois numeros|

*/

int main() {

setlocale(LC_ALL,"Portuguese");

int I;
float A, B, C;

printf("Digite um valor de 1 a 3 para I para receber os numeros na ordem certa, sabendo que: \n1 Numeros na ordem crescente. \n2 Numeros na ordem decrescente. \n3 Para o numero maior entre outros dois.\n");
scanf("%d", &I);

printf("\nDigite o valor de A, B e C: ");
scanf("%f", &A);
scanf("%f", &B);
scanf("%f", &C);


switch (I)
{
case 1: if (A<B && A<C){
            if (B<C)
                printf("%f, %f, %f", A, B, C);
                else 
                    printf("%f, %f, %f", A, C, B);
}       else if (B<A && B<C){
            if (A<C)
                printf("%f, %f, %f", B, A, C);
                else
                    printf("%f, %f, %f", B, C, A);
}
        else if (C<A && C<B){
            if (A<B)
                printf("%f,,%f, %f", C, A, B);
                else
                   printf("%f, %f, %f", C, B, A);
}
            
    
    break;

case 2: if (A>B && A>C){
            if (B>C)
                printf("%f, %f, %f", A, B, C);
                else 
                    printf("%f, %f, %f", A, C, B);
}       else if (B>A && B>C){
            if (A>C)
                printf("%f, %f, %f", B, A, C);
                else
                    printf("%f, %f, %f", B, C, A);
}
        else if (C>A && C>B){
            if (A>B)
                printf("%f,,%f, %f", C, A, B);
                else
                   printf("%f, %f, %f", C, B, A);
}
    break;

case 3:if (A>B && A>C){
            if (B>C)
                printf("%f, %f, %f", C, A, B);
                else 
                    printf("%f, %f, %f", B, A, C);
}       else if (B>A && B>C){
            if (A>C)
                printf("%f, %f, %f", C, B, A);
                else
                    printf("%f, %f, %f", A, B, C);
}
        else if (C>A && C>B){
            if (A>B)
                printf("%f,,%f, %f", B, C, A);
                else
                   printf("%f, %f, %f", A, C, B);
}
    break;
}
getch();
}