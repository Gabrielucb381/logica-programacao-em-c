
/* Crie uma funcao que receba tres numeros inteiros a, b, c, sendo a maior que 1. A funcao devera
somar todos os inteiros entre b e c que sejam divisiveis por a (inclusive b e c) e retornar o
resultado para a funcao principal. */

#include <stdio.h>

int FUNC(int a, int b, int c){
    int soma=0;

    if (b>c){

        int temp = b;
        b=c;
        c = temp;
    }

    for (int i=b; i<=c; i++){
        if (i%a == 0){
            soma = soma+i;
            
            }
        } return soma;
}

int main (){

    int a,b,c;
    printf("Digite 3 numeros: (A, B e C): ");
    scanf("%d %d %d",&a,&b,&c);

    if (a<1){
        printf("\nO primeiro numero deve ser maior que zero: ",a);
        return 1;
        }
        if (b%a == 0 && c%a == 0) {

            printf("A soma de %d e %d e: %d", b,c,FUNC(a,b,c));

    } else
        printf("%d e %d Tem que ser divisivel por %d.",b,c,a);
        
}
