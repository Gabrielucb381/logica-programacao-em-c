#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o código correspondente ao cargo de um
funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo
salário. Os cargos estão na tabela a seguir.

Codigo | Cargo      | Percentual
1      | Escriturario | 50%
2      | Secretario   | 35%
3      | Caixa        | 20%
4      | Gerente      | 10%
5      | Diretor      | Nao tem aumento
*/

int main(){

    float sal, novSal, valAum;
    int codCarg;

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codCarg);

    switch (codCarg)
    {
    case 1: printf("Digite o valor do salario: (Ex: 1250.00)");
            scanf("%f", &sal);
            novSal = sal + (sal * 50/100);
            valAum = novSal - sal;
            system("cls");

        printf("Codigo 1: Escriturario \nValor do aumento: %.2f\nNovo salario: %.2f", valAum,novSal);
        break;
    
    case 2: printf("Digite o valor do salario: (Ex: 1250.00)");
            scanf("%f", &sal);
            novSal = sal + (sal * 35/100);
            valAum = novSal - sal;
            system("cls");

        printf("Codigo 2: Secretario \nValor do aumento: %.2f\nNovo salario: %.2f", valAum,novSal);
        break;

        case 3: printf("Digite o valor do salario: (Ex: 1250.00)");
            scanf("%f", &sal);
            novSal = sal + (sal * 20/100);
            valAum = novSal - sal;
            system("cls");

        printf("Codigo 3: Caixa \nValor do aumento: %.2f\nNovo salario: %.2f", valAum,novSal);
        break;

        case 4: printf("Digite o valor do salario: (Ex: 1250.00)");
            scanf("%f", &sal);
            novSal = sal + (sal * 10/100);
            valAum = novSal - sal;
            system("cls");

        printf("Codigo 4: Gerente \nValor do aumento: %.2f\nNovo salario: %.2f", valAum,novSal);
        break;

        case 5: printf("Digite o valor do salario: (Ex: 1250.00)");
            scanf("%f", &sal);
            novSal = sal;
            valAum = 0;
            system("cls");

        printf("Codigo 5: Diretor \nValor do aumento: %.2f\nNovo salario: %.2f (não tem aumento)", valAum, novSal);
        break;

}

}