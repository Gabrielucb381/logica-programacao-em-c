
/* Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da linha em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma matriz 4 X 4 com numeros reais, calcule e mostre seu MINMAX e sua posicao (linha e coluna). */

#include <stdio.h>

int main() {
    float matriz[4][4];
    float min = 0, max = 0;
    int min_lin = 0, min_col = 0, max_lin = 0, max_col = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

            if ((i == 0 && j == 0) || matriz[i][j] < min) {
                min = matriz[i][j];
                min_lin = i;
                min_col = j;
            }

            if (i == min_lin && matriz[i][j] > max) {
                max = matriz[i][j];
                max_lin = i;
                max_col = j;
            }
        }
    }

    printf("\nO MINMAX da matriz é: %.2f\n", max);
    printf("Ele se encontra na posição [%d][%d].\n", max_lin, max_col);

    return 0;
}
