#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*– Faça um programa que receba um número inteiro e verifique se esse número é par
ou ímpar.*/

int main() {

    setlocale(LC_ALL,"Portuguese");
    
    int num, resto;
    system("cls");

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resto = num % 2;

    if (resto == 0)
        printf("O numero e par!");
        else
            printf("O numero e impar!");
}