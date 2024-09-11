
/* Crie uma sub-rotina que receba como parametro um valor inteiro e positivo N e retorne o valor
de S, obtido pelo seguinte calculo:
S = 1 + 1/2! + 1/3! + ... + 1/N! */

#include <stdio.h>

float FUNC(int n, float soma, int j, int i, float fat){

    if (n>0){

        for (i=2; i<=n; i++){
            fat = 1.0;
            for (j=i; j>1; j-- ){
                fat = fat * j;
                printf("\n\nFatorial de %d e %.14f",i, fat);
                    soma = soma + 1/fat;
                printf("\n\nSoma depois da integracao e %f", soma);

            }
        }
        printf("\n\nO resultado final depois da soma e %.14f",soma);
    } else
        printf("\n\nDigite um numero maior que zero.");

        return soma;
}

int main(){

    int n, i=2, j=i;
    float fat=1, soma=1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    FUNC(n, soma, j, i, fat);


}
