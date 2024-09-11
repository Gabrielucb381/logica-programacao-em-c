#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*Faça um programa que receba três notas de um aluno, calcule e mostre a média
aritmética e a mensagem que segue a tabela abaixo.

| Média Aritmética  | Mensagem  |
|-------------------|-----------|
| 0,00 até 2,99     | Reprovado |
| 3,00 até 6,99     | Exame     |
| 7,00 até 10,00    | Aprovado  |
*/


int main (){

    setlocale(LC_ALL,"Portuguese");

    float nota1, nota2, nota3, medArit;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);

    medArit = (nota1 + nota2 + nota3)/3;

    printf("\nA media aritmetica e: %f", medArit);

    if (medArit >= 0 && medArit <= 2.99){
        printf("\nReprovado");
    } else if (medArit >= 3 && medArit <= 6.9){
        printf("\nExame");
    } else if (medArit >= 7 && medArit <= 10) {
        printf("\nAprovado");
    }
}