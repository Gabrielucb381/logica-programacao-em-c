
/* Elabore um programa que preencha uma matriz 10 X 10 com numeros inteiros, execute as trocas especificadas a seguir e mostre a matriz resultante:

a linha 2 com a linha 8;
a coluna 4 com a coluna 10;
a diagonal principal com a diagonal secundaria;
a linha 5 com a coluna 10.
*/

#include <stdio.h>

#define N 10

int main() {
    int matriz[N][N];

    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < N; j++) {
        int temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp;
    }

    for (int i = 0; i < N; i++) {
        int temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }

    for (int i = 0; i < N; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][N - 1 - i];
        matriz[i][N - 1 - i] = temp;
    }

    for (int i = 0; i < N; i++) {
        int temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }

    printf("\nMatriz resultante:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

