
/*O custo ao consumidor de um carro novo é a soma do preço de fábrica
 com opercentual de lucro do distribuidor e dos impostos aplicados ao preço
 de fábrica. Faça um programa que receba o preço de fábrica de um veículo,
 o percentual de lucro do distribuidor e o percentual de impostos. Calcule e
 mostre:
 a) O valor correspondente ao lucro do distribuidor;
 b) O valor correspondente aos impostos.
 c) O preço final do veículo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float carro, preFab, perDis, perImp, valImp, valDist;

    printf("Qual e o preco de fabrica?");
    scanf("%f", &preFab);
    printf("\nQual a porcentagem de lucro do distribuidor? ");
    scanf("%f", &perDis);
    printf("\nQual a porcentagem do imposto? ");
    scanf("%f", &perImp);

    valDist = preFab * (perDis/100);
    valImp = preFab * (perImp/100);
    carro = preFab + valDist + valImp;


    printf("\nValor de fabrica: R$%.2f \nLucro do distribuidor: R$%.2f \nPorcentagem imposto: R$%.2f \nValor do carro: R$%.2f", preFab, valDist, valImp, carro);

    return 0;
}