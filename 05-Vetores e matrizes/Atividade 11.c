
/* Crie um programa que preencha uma matriz 3 X 4 com numeros inteiros e some cada uma das linhas, armazenando os resultados das somas em um vetor. A seguir, o programa devera multiplicar cada elemento da matriz pela soma da linha correspondente e mostrar a matriz resultante. */

#include <stdio.h>

int main() {
    int matriz[3][4];
    int vetor_somas[3] = {0}; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            vetor_somas[i] += matriz[i][j]; 
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] *= vetor_somas[i];
        }
    }

    printf("\nMatriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
