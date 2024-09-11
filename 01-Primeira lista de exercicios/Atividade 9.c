
/*Faca um programa que calcule e mostre a area de um triangulo. Sabe-se que: area = (base * altura)/2.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float area, base, altura;
    printf("Digite o tamanho da base do triangulo: ");
    scanf("%f", &base);
    printf("\nDigite o a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("\nA area do triangulo e: %.2fM", area); 

}