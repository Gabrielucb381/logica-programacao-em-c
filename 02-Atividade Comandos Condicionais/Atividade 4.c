#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que receba três números e mostre-os em ordem crescente.  */

int main () {

    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    int temp;

    if (n1 > n2){
    temp = n1;
    n1 = n2;
    n2 = temp;
    } if (n2 > n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    } if (n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("\nA ordem crescente e: %d, %d, %d", n1, n2, n3);    
}