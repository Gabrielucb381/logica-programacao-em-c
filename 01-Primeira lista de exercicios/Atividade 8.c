
/*Façca um programa que receba o valor de um deposito e o valor da taxa de juros,
 calcule e mostre o valor do rendimento e o valor total depois do rendimento.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float dep, taxaJuros, valorTotal, valorRend;

    printf("Digite o valor do salario: ");
    scanf("%f", &dep);
    printf("\nDigite a porcentagem da taxa de juros: ");
    scanf("%f", &taxaJuros);

    valorTotal = dep + (dep	* taxaJuros/100);
    valorRend = valorTotal - dep;

    printf("\nEntao o valor do rendimento e: R$%.2f", valorRend);
    printf("\nO valor atual do deposito com correcao e: R$%.2f", valorTotal);


}