
/*Faca um programa que receba o salario de um funcionario e o percentual de
 aumento, calcule e mostre o valor do aumento e o novo salario.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float sal, aum, novSal, valAum;

    printf("Digite o valor do salario: ");
    scanf("%f", &sal);
    printf("\nDigite a porcentagem do aumento: ");
    scanf("%f", &aum);


    novSal = sal + (sal * aum / 100);
    valAum = novSal - sal;

    printf("\nO aumento foi de: %f", valAum);

    printf("\nO novo salario e: %f", novSal);


}