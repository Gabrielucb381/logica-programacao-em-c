
/* Faca um programa que receba o salario de um funcionario, calcule e mostre o novo
 salario, sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float sal, aum, novSal;

    printf("Digite o valor do salario: ");
    scanf("%f", &sal);

    aum = sal * 25/100;
    novSal = sal + aum;

    printf("\nO novo salario e: %f", novSal);


}