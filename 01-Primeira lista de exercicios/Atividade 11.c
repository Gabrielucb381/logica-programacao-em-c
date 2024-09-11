
/*Faca um programa que receba um numero positivo e maior que zero,
 calcule e mostre:
 a) O numero digitado ao quadrado.
 b) O numero digitado ao cubo.
 c) A raiz quadrada do numero digitado.
 d) A raiz cubica do numero digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float num, quad, cubo, rQuad, Rcubo;
    

    printf("Digite o numero para calcularmos: \n");
    scanf("%f", &num);

    if (num <= 0){
        printf("\nO numero deve ser maior que zero.\n");
    return 1;
    }

    quad = powf(num, 2);
    cubo = powf(num, 3);
    rQuad = powf(num, 1.0/2.0);
    Rcubo = powf(num, 1.0/3.0);

    printf("\nO numero ao quadrado e: %.2f\n", quad);
    printf("\nO numero ao cubo e: %.2f\n", cubo);
    printf("\nA raiz quadrada e: %.2f\n", rQuad);
    printf("\nA raiz cubica e: %.2f\n", Rcubo);

    
    return 0;
}
