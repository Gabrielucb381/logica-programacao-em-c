
/*Faca um programa que receba o salario-base de um funcionario, calcule e mostre o
 salario a receber, sabendo-se que esse funcionario tem gratificação de 5% sobre o
 salario-base e paga imposto de 7% sobre o salario-base.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float sal, imp, grat, novoSal;

    printf("Digite o valor do salario: ");
    scanf("%f", &sal);

    imp = sal * 7/100;
    grat = sal * 5/100;

    novoSal = sal + grat - imp;
    printf("\nO valor atual do salario e: R$%.2f", novoSal);

}