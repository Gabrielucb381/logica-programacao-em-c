
/*Faca um programa que receba tres notas e seus respectivos pesos, calcule e
 mostre a media ponderada dessas notas.*/

#include <stdio.h>

int main () {

    float n1, n2, n3, p1, p2, p3, s1, s2, s3, medPond;

    printf("Digite as tres notas: ");

    printf("\nNota 1: ");
    scanf("%f", &n1);

    printf("\nNota 2: ");
    scanf("%f", &n2);

    printf("\nNota 3: ");
    scanf("%f", &n3);

    printf("\nPeso 1: ");
    scanf("%f", &p1);

    printf("\nPeso 2: ");
    scanf("%f", &p2);

    printf("\nPeso 3: ");
    scanf("%f", &p3);

    s1 = n1 * p1;
    s2 = n2 * p2;
    s3 = n3 * p3;

    medPond = (s1 + s2 + s3)/6;

    printf("A media ponderada e: %.2f", medPond);


}