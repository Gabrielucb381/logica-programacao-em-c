
/* Em uma eleicao presidencial, existem quatro candidatos. Os votos sao informados atraves
de codigo. Os dados utilizados para a escrutinagem obedecem a seguinte codificacao:
- 1, 2, 3 e 4 = voto para os respectivos candidatos;
- 5 voto nulo;
- 6 voto em branco; */

#include <stdio.h>

int main() {
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votos_nulos = 0, votos_em_branco = 0;

    printf("Digite o voto (1, 2, 3, 4 para os candidatos, 5 para voto nulo, 6 para voto em branco). Finalize com -1:\n");

    for (;;) {
        scanf("%d", &voto);

        if (voto == -1)
            break;

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            default:
                printf("Voto invalido!\n");
        }
    }

    printf("\nResultados da votacao:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos nulos: %d\n", votos_nulos);
    printf("Votos em branco: %d\n", votos_em_branco);

    return 0;
}
