
/* Faca um programa que receba o salario-base de um funcionario, calcule e
 mostre seu salario a receber, Sabendo-se que esse funcionario tem gratificacao de R$
 50,00 e paga imposto de 10% sobre o salario-base.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float sal, imp, grat, novoSal;

    printf("Digite o valor do salario: ");
    scanf("%f", &sal);

    imp = sal * 10/100;
    grat = 50;

    novoSal = sal + grat - imp;
    printf("\nO valor atual do salario e: R$%.2f", novoSal);

}