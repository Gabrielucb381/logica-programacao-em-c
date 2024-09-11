
/*Faça um programa que receba três notas, calcule e mostre a média aritmética entre
 elas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

float n1,n2,n3,nmedia;

printf("Digite as notas dos 3 bimestres: ");

printf("\nDigite a nota 1: ");
scanf("%f", &n1);

printf("\nDigite a nota 2: ");
scanf("%f", &n2);

printf("\nDigite a nota 3: ");
scanf("%f", &n3);

nmedia = (n1 + n2+ n3)/3;

printf("\nA media final e %.2f", nmedia);

return 0;
}