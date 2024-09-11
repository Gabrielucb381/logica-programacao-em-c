
/*.
 10. Faca um programa que calcule e mostre a area de um círculo. Sabe-se que:
 Area = Area= PI*r(elevado a dois) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main () {

    float raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("\nO raio do circulo : %.2f", area);
}