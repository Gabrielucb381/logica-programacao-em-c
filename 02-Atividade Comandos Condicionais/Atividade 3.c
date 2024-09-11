#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Faça um programa que receba dois numeros e mostre o maior */

int main (){

    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2){
    printf("%d", n1);
    } else{
        printf("%d", n2);
    }


    return 0;
}
