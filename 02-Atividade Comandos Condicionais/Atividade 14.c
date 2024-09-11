#include <stdio.h>

/*Faca um programa que receba o salario de um funcionario, calcule e mostre o novo salario desse funcionario, acrescido de bonificacao e de auxilio-escola.

Salario	                              Bonificacao
Ate R$500,00	                     5% do salario
Entre R$500,01 a R$1.200,00	        12% do salario
Acima de R$1.200,00	                Sem bonificacao

Salario         	Auxilio-Escola
Ate R$600,00	      R$150,00
Mais que R$600,00	  R$100,00
*/

int main(){

float sal,boni,auxEsc,novoSal;

    printf("Digite o seu salario: ");
    scanf("%f", &sal);

    if (sal <= 500)
        boni = sal * 5/100;
    else if (sal > 500 && sal <= 1200)
        boni = sal * 12/100;
    else
        boni = 0;

    if (sal <= 600)
        auxEsc = 150;
        else
        auxEsc = 100;

        novoSal = sal + boni + auxEsc; 

        printf("O novo salario e: R$%.2f", novoSal);

}