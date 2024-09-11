
/* Fazer um programa que preencha um vetor com X numeros inteiros, em que o ultimo numero lido seja 999 (o ultimo numero nao fara parte do vetor). E imprima o vetor na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

void VETOR(int vet[]){
    int i=0, quantNum=0;
    printf("Digite os numeros do vetor e finalize com o numero '999': ");

    for(;;){
        scanf("%d",&vet[i]);

        if(vet[i] != 999){
        quantNum++;
        }
        if(vet[i] == 999) {  
        break;
        }
        i++;

    }printf("Os numeros digitados foram: ");
    for(i=quantNum-1; i>=0; i--){
        printf(" %d",vet[i]);
    }
}

int main(){

    int vet[1000];

    VETOR(vet);
}