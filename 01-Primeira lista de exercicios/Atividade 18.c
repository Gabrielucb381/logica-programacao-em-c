
/*Pedro comprou um saco de racao com peso em quilos. Ele possui dois gatos, para
 os quais fornece a quantidade de racao em gramas. A quantidade diaria de racao
 fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso
 do saco de racao e a quantidade de racao fornecida para cada gato, calcule e mostre
 quanto restara de racao no saco apos cinco dias.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float pesoSacRac, PesoComGat1, pesoComGat2, comGat1kg, comGat2kg, sobRacao;

    printf("Digite o peso do saco: ");
    scanf("\n%f", &pesoSacRac);
    printf("\nDigite a quantidade de racao dada para o gato 1: (quantidade em gramas) ");
    scanf("\n%f", &PesoComGat1);
    printf("\nDigite a quantidade de racao dada para o gato 2: (quantidade em gramas) ");
    scanf("\n%f", &pesoComGat2);

    comGat1kg = PesoComGat1/1000;
    comGat2kg = pesoComGat2/1000;
    sobRacao = pesoSacRac - (comGat1kg + comGat2kg)*5;

    printf("\nQual o peso da racao em Kg? %.2fKg \nPeso da comida do gato 1 em gramas: %.2fg \nPeso da comida do gato 2 em gramas: %.2fg \nQual o peso da comida do gato 1 em kg? %.2fKg \nQual o peso da comida do gato 2 em kg? %.2fKg \nSobra da racao apos 4 dias alimentando os gatos: %.2fKg", pesoSacRac, PesoComGat1, pesoComGat2, comGat1kg, comGat2kg, sobRacao); 

    return 0;
}