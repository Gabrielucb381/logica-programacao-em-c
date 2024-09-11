
/*Faca um programa que receba dois numeros maiores que zero, calcule e
 mostre um elevado ao outro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float num1, num2, numEle;;
    

    printf("Digite o primeiro numero para calcularmos: \n");
    scanf("%f", &num1);
    printf("\nDigite o segundo numero para calcularmos: \n");
    scanf("%f", &num2);


    if (num1 <= 0 || num2 <= 0) {
    printf("\nAmbos numeros deve ser maior que zero.\n");
    return 1;
    }

    numEle = pow(num1, num2);

    printf("\nO valor total e: %f", numEle);

    
    return 0;
}
