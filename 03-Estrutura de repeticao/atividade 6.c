
/* Faca um programa que calcule o valor aproximado de cos(x) pela serie de Taylor, dado pela
aproximacao abaixo:
cos(x) = 1 - (x^2 / 2!) + (x^4 / 4!) - (x^6 / 6!) + ...
Faca a soma com 3 termos e verifique o resultado correto, usando a funcao cos(..) da biblioteca
math.h
Se o erro for muito grande, isto e, a diferenca entre o seu resultado e o da funcao for muito
elevada, experimente recalcular a aproximacao com mais termos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 
    float fat, x, numerador, soma = 1, valor, cosx, PI = 3.1415;
    int i, j;
        printf("Digite o valor de X: ");
        scanf("%f", &x);
        x = (x*PI)/180;
    for(i = 1; i<=8; i++)
    {
    if(i%2 == 0)
    {
        fat = 1;
        for(j = i; j>1; j--)
            fat = fat*j;
        
        numerador = pow(x,i);
        valor = numerador/fat;
    
        if(i%4 == 0)
                soma = soma + valor;
        else
                soma = soma - valor;   
    }
    }
    cosx = cos(x);
    printf("\nO valor do cos de x pela funcao cos(x) = %f\n", cosx);

    printf("\nCalculado pelo programa por meio da serie de Taylor: %f\n", soma);
}
