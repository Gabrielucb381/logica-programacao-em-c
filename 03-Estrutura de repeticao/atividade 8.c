
/* Faca um programa que receba varios numeros, calcule e mostre:
a) A soma dos numeros digitados;
b) A quantidade de numeros digitados;
c) A media dos numeros digitados;
d) O maior numero digitado;
e) O menor numero digitado;
f) A media dos numeros pares;
g) A percentagem dos numeros impares entre todos os numeros digitados.
Finalize a entrada de dados com a digitacao do numero 30000. Entende-se que o usuario
nao possa digitar valor maior que 30000. */


#include <stdio.h>

int main() {
    int num, soma = 0, quantidade = 0, maior = 0, menor = 30000, soma_pares = 0, quantidade_pares = 0, quantidade_impares = 0;

    printf("Digite os numeros (finalize com 30000):\n");

    for (;;) {
        scanf("%d", &num);

        if (num == 30000)
            break;

        soma += num;
        quantidade++;

        switch (1) {
            case 1: 
                if (num > maior)
                    maior = num;
                break;
            case 2: 
                if (num < menor)
                    menor = num;
                break;
        }
        
        if (num % 2 == 0) {
            soma_pares += num;
            quantidade_pares++;
        } else {
            quantidade_impares++;
        }
    }

    if (quantidade == 0) {
        printf("Nenhum numero foi digitado.\n");
        return 0;
    }

    printf("\nSoma dos numeros digitados: %d\n", soma);
    printf("Quantidade de numeros digitados: %d\n", quantidade);
    printf("Media dos numeros digitados: %.2f\n", (float)soma / quantidade);
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);

    if (quantidade_pares > 0)
        printf("Media dos numeros pares: %.2f\n", (float)soma_pares / quantidade_pares);
    else
        printf("Nenhum numero par foi digitado.\n");

    printf("Percentual de numeros impares: %.2f%%\n", (float)quantidade_impares / quantidade * 100);

    return 0;
}
