
/* Um funcionario de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a) Esse funcionario foi contratado em 2005, com salario inicial de R$ 1.000,00;
b) Em 2006 recebeu aumento de 1.5% sobre seu salario inicial;
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro
do percentual do ano anterior.
Faça um programa que determine o salario atual desse funcionario. */

#include <stdio.h>

int main() {
   
    float salario = 1000.0;
    float aumento = 1.5 / 100;
    int ano;
    
    salario += salario * aumento;
    
    for (ano = 2007; ano <= 2024; ano++) {
        aumento *= 2; 
        salario += salario * aumento;
    }
    printf("Salario em 2024: R$%.2f\n", salario);

    return 0;
}
