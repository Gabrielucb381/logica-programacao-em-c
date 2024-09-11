
/* Faca um programa que receba o numero de horas trabalhadas e o valor
 do salario minimo. Calcule e mostre o salario a receber seguindo as regras
 abaixo:
 a) A hora trabalhada vale a metade do salario minimo;
 b) O salario bruto equivale ao numero de horas trabalhadas multiplicado pelo
 valor da hora trabalhada;
 c) O imposto equivale a 3% do salario bruto.
 d) O salario a receber equivale ao salario bruto menos o imposto. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float numHorTrab, valSalMin, salRec, valHorTrab, imp, salBru;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &valSalMin);

    printf("\nDigite a quantidade de horas trabalhadas: ");
    scanf("%f", &numHorTrab);

    valHorTrab = valSalMin/2;
    salBru = valHorTrab * numHorTrab;
    imp = salBru * 3/100;
    salRec = salBru - imp;

    printf("\nValor da hora trabalhada: R$%.2f", valHorTrab);
    printf("\nValor do salario bruto: R$%.2f", salBru);
    printf("\nValor do imposto: R$%.2f",imp);
    printf("\nValor do salario a receber: R$%.2f", salRec);

    return 0;
}