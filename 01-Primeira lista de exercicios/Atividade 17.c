
/*Um trabalhador recebeu seu salario e depositou em sua contra corrente
 bancaria. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo
 atual. Sabe-se que cada operação bancaria de retirada paga CPMF de 0,38%
 e o saldo inicial da conta esta zerado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float salario, saldoInicial, cpmf1, cpmf2, saldoAtual;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    saldoInicial = 0;
    cpmf1 = salario * 0.38/100;
    cpmf2 = salario * 0.38/100;
    saldoAtual = saldoInicial + salario - cpmf1 - cpmf2;

    printf("\nValor do saldo inicial: R$%.2f", saldoInicial);
    printf("\nValor do salario: R$%.2f", salario);
    printf("\nValor do cpmf1: R$%.2f", cpmf1);
    printf("\nValor do cpmf2: R$%.2f", cpmf2);
    printf("\nValor do saldo atual: R$%.2f", saldoAtual);

    return 0;
}