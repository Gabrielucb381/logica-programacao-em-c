#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

/*Faça um programa que mostre o menu de opções a seguir, receba a opção do
usuário e os dados necessários para executar cada operação.
Menu de opções:
1 – Somar dois números
2 – Raiz quadrada de um número
Digite a opção desejada ->*/

int main(){

setlocale(LC_ALL, "Portuguese");
    int I;
    float num1, num2, soma, raiz;

system("cls");

printf("Menu de opções:\n1-Somar dois números \n2-Raiz quadrada de um número \nDigite a opção desejada: ");
scanf("%d", &I);

if (I<1 || I>2){
    printf("A opção é inválida");
    return 1;
}
switch (I)
{ 
case 1: printf("Digite os dois números que deseja somar: ");
            scanf("%f", &num1);
            scanf("%f", &num2);
            soma = num1 + num2;

        printf("O resultado da soma é: %.2f\n", soma);
    break;

case 2: printf("Digite o número que você deseja encontrar a raiz quadrada: ");
            scanf("%f", &num1);
            raiz = powf(num1, 1.0 / 2.0);

        printf("A raiz de %.2f é: %.2f\n", num1, raiz);
    break;    
}
system("pause");

return main();

}