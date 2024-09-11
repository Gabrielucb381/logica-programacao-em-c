#include <stdio.h>

/*
Faça um programa que apresente o menu de opções a seguir, permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições como salário negativo.

Menu de opções:
1 – Imposto
2 – Novo Salário
3 – Classificação
Digite a opção desejada ->

Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras a seguir:

Salários	Percentual do Imposto
Menor que R$500,00	5%
De R$500,00 a R$850,00	10%
Acima de R$850,00	15%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário, usando as regras a seguir:

Salário	Aumento
Maiores que R$1.500,00	R$25,00
De R$750,00 (inclusive) a R$1.500,00	R$50,00
De R$450,00 (inclusive) a R$750,00	R$75,00
Menores que R$450,00	R$100,00
Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir:

Salário	Classificação
Até R$700,00 (inclusive)	Mal remunerado
Maiores que R$700,00	Bem remunerado
*/

int main(){

    int menu;
    float sal,imposto,aum,novoSal;

printf("Menu de opcoes: \n1-Imposto\n2-Novo salario\n3-Classificacao\nDigite a opcao desejada: ");
scanf("%d", &menu);


switch (menu)
{
case 1: printf("Digite o valor do salario: ");
        scanf("%f", &sal);

        if (sal < 500)
            imposto = sal * 5/100;
        else if (sal>500 && sal<=850)
            imposto = sal * 10/100;
        else
            imposto = sal * 15/100;
            
            printf("\nO valor do imposto e: %.2f", imposto);
        
        break;

case 2: printf("Digite o valor do salario: ");
        scanf("%f", &sal);

        if (sal < 450)
            aum = 100.00;
        else if (sal>=450 && sal<750)
            aum = 75;
        else if (sal>=850 && sal<=1500)
            aum = 50;
        else
            aum = 25;

            novoSal = sal + aum;

            printf("\nO valor do novo salario e: R$%.2f", novoSal);
         
    break;

    case 3: printf("Digite o valor do salario: ");
        scanf("%f", &sal);

        if (sal <= 700)
            printf("O salario e: %.2f\nClassificacao: Mau remunerado.", sal);
        else
            printf("O salario e %.2f\nClassificacao: Bem remunerado.", sal);

           
         
    break;
}


}