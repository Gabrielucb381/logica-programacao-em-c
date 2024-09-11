
/* Um elemento Aij de uma matriz e dito ponto de sela da matriz A se, e somente se, Aij for ao mesmo tempo o menor elemento da linha i e o maior elemento da coluna j. Faca um programa que carregue uma matriz de ordem 2 X 3, verifique se a matriz possui ponto de sela e, se possuir, mostre seu valor e sua localizacao. */

#include <stdio.h>

int main() {
    int matriz[2][3];

    printf("Digite os elementos da matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            int ponto_de_sela = 1;
            for (int k = 0; k < 2; k++) {
                if (matriz[i][j] < matriz[i][k]) {
                    ponto_de_sela = 0;
                    break;
                }
            }
            for (int k = 0; k < 3; k++) {
                if (matriz[i][j] > matriz[k][j]) {
                    ponto_de_sela = 0;
                    break;
                }
            }
            if (ponto_de_sela) {
                printf("Ponto de sela encontrado: %d na posição [%d][%d]\n", matriz[i][j], i, j);
                return 0;
            }
        }
    }

    printf("Nenhum ponto de sela encontrado na matriz.\n");

    return 0;
}
