
/*Faça um programa que receba o ano de nascimento de uma pessoa e o
 ano atual. Calcule e mostre:
 a) Aidade dessa pessoa.
 b) Quantos anos essa pessoa terá em 2050.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

    int anoNasc, anoAtual, idade, ano2050;

    printf("Digite o ano em que voce nasceu? ");
    scanf("%d", &anoNasc);

    printf("\nAgora digite o ano em que voce esta: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasc;
    ano2050 = 2050 - anoNasc;

    printf("\nA sua idade e: %d anos", idade);
    printf("\nEm 2050 voce tera: %d anos", ano2050);

}