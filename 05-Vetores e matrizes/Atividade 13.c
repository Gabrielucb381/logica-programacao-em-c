
/* Crie um programa que preencha uma primeira matriz de ordem 3 X 4 e uma segunda matriz 4 X 2. O programa devera, tambem, calcular e mostrar a matriz resultante do produto matricial das duas matrizes anteriores, armazenando-o em uma terceira matriz de ordem 3 X 2. */

#include <stdio.h>

int main() {
    int matriz1[3][4], matriz2[4][2], matriz_resultante[3][2];

    printf("Preencha a primeira matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Preencha a segunda matriz 4x2:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matriz_resultante[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                matriz_resultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nMatriz resultante do produto matricial:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz_resultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
