
/* Faca um programa que leia um valor N qualquer, inteiro e positivo, calcule e mostre a seguinte soma:
E = 1+(1/2)+(1/3)+...+(1/n!)
Obs.: N! = 1 x 2 x 3 x 4 x .... x N
OBS: 0! = 1 (fatorial do numero zero e igual a 1 por definicao).
Alem disso, nao deve ser permitido que seja calculado o fatorial de numero negativo, pois isso
nao existe. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float soma = 1, fat;
    int i, n, j;

    printf("Digite o numero de iteracoes: \n");
    scanf("%d", &n);

    if (n > 0) {
        for (i = 2; i <= n; i++) {
            fat = 1;
            for (j = i; j > 1; j--)
                fat = fat * j;
            printf("\nFatorial de %d = %.14f", i, fat);
            soma = soma + 1/fat;
            printf("\nO valor da soma apos a iteracao %d e: %.14f", i, soma);
        }  
        printf("\nO resultado final da soma e: %.14f", soma); 
    } else 
        printf("\nDigite um numero maior que zero: ");

    return 0;
}
