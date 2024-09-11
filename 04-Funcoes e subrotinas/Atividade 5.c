
/* Faca um programa que receba os valores antigo e atual de um determinado produto. Chame
uma sub-rotina que determine o percentual de acrescimo entre esses valores. O resultado
devera ser mostrado no programa principal */

#include <stdio.h>

float CALC(float valIni, float valFin){

    float aum = valFin - valIni;
    float porc = (aum / valIni) * 100;

    return porc;
}

int main(){

    float valIni, valFin;

    printf("Digite o valor inicial e depois o valor com aumento: ");
    scanf("%f %f", &valIni, &valFin);

    float porcAum = CALC(valIni, valFin);

    printf("A porcentagem de aumento foi de %.2f%%",porcAum);
}