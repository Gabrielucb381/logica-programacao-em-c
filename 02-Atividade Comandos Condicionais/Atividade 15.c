#include <stdio.h>

/*Faça um programa que receba o valor do salario minimo, o numero de horas trabalhadas, o numero de dependentes do funcionario e a quantidade de horas extras trabalhadas. Calcule e mostre o salario a receber do funcionario de acordo com as regras a seguir:

O valor da hora trabalhada é igual a 1/5 do salario minimo;
O salario do mes é igual ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
Para cada dependente acrescentar R$32,00;
Para cada hora extra trabalhada calcular o valor da hora trabalhada acrescida de 50%;
O salario bruto é igual ao salario do mes mais o valor dos dependentes mais o valor das horas extras;
Calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir.

IRRF	        Salario Bruto
Isento	    Inferior a R$200,00
10%	      De R$200,00 até R$500,00
20%	        Superior a R$500,00

O salario liquido é igual ao salario bruto menos IRRF;
A gratificaçao de acordo com a tabela a seguir.

Salario Liquido	       Gratificacao
Até R$350,00	         R$100,00
Superior a R$350,00	    R$50,00
*/

int main(){

    float salMin,horTrab,depFun,horExt,salRec, valHorTrab, salMes,aumDep,salBrut,IRRF, salLiq, grat, numHorExt;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salMin);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horTrab);

    printf("Digite o numero de dependentes que o funcionario tem: ");
    scanf("%f", &depFun);

    printf("Digite o numero de horas extras: ");
    scanf("%f", &numHorExt);

    valHorTrab = salMin * 1/2;
    salMes = horTrab * valHorTrab;
    aumDep = depFun * 32;
    horExt = numHorExt *(valHorTrab + (valHorTrab * 1/2));
    salBrut = salMes+aumDep+horExt;

    if (salBrut < 200)
        IRRF = 0;
    else if (salBrut >= 200 && salBrut < 500)
        IRRF = salBrut * 10/100;
    else
        IRRF = salBrut * 20/100;

    salLiq = salBrut - IRRF;

    if (salLiq <= 350)
        grat = 100;
    else
        grat = 50;

    salRec = salLiq + grat;

    printf("O salario a receber e: R$%.2f", salRec);

}