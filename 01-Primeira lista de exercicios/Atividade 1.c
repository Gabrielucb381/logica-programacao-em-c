
/* 1. Faca um programa que receba quatro numeros inteiros, calcule e mostre a soma
 desses numeros.
 Solução:
 ALGORITMO
 DECLARE n1, n2, n3, n4, soma NUMERICO
 LEIA n1, n2, n3, n4
 soma = n1+n2+n3+n4
 ESCREVA soma
 FIM_ALGORITMO. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    int n1, n2, n3, n4, nsoma;

    printf("Escreva 4 numeros aleatorios: ");

    printf("\nNumero 1: ");
    scanf("%d", &n1);
    printf("\nNumero 2: ");
    scanf("%d", &n2);
    printf("\nNumero 3: ");
    scanf("%d", &n3);
    printf("\nNumero 4: ");
    scanf("%d", &n4);

    nsoma = n1 + n2 + n3 + n4;

    printf("\nA soma dos numeros e %d.", nsoma);
    return 0;
}
