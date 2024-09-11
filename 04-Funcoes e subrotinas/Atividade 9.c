
/*Elabore uma sub-rotina que receba como parametro um valor inteiro e positivo N 
(inteiro e maior ou igual a 1) e determine o valor da sequência S, descrita a seguir:

S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n^2 + 1) / (n + 3) */

#include <stdio.h>
#include <stdlib.h>

float SEQUE(int n){

    float soma=0;
    float denom = 4;
    float numer= 2;

    if (n>0){
        for (int i=1; i<=n; i++){
            soma += numer/denom;
            
            numer= i * i + 1; 
            denom++; 
        } 
        return soma;

    } else{
        printf("\nDigite um numero maior que 0.");
        return 0;
    }
}

int main(){
    int n;

    printf("\nDigite a quantidade de iteracoes: ");
    scanf("%d",&n);

    float soma = SEQUE(n);

    printf("\nO valor total da soma e %f", soma);
    
    return 0;
}
