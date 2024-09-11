
/* Construa um algoritmo em PC para encontrar o maior e o menor numero de uma
serie de numeros positivos fornecidos pelo usuario atraves do teclado. O dado finalizador e o
numero –1, e este não deve ser considerado. */


#include <stdio.h>

int main() {
    int num, maior, menor;
    int primeiro = 1; 

  
    maior = menor = 0;

    printf("Digite uma serie de numeros positivos (finalize com -1):\n");

    for (;;) {
        scanf("%d", &num);

        if (num == -1)
            break;

        if (primeiro) {
            maior = menor = num;
            primeiro = 0; 
        } else {
            if (num > maior)
                maior = num;
            if (num < menor)
                menor = num;
        }
    }

    if (primeiro) {
        printf("Nenhum numero positivo foi digitado.\n");
    } else {
        printf("O maior numero digitado: %d\n", maior);
        printf("O menor numero digitado: %d\n", menor);
    }

    return 0;
}
