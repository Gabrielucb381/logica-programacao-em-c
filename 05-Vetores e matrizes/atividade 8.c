
/* Faca um programa que, no momento de preencher um vetor com oito numeros inteiros, ja os armazene de forma crescente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void VET(int vetor[]){

    int i,j,troca;
    for(i=0; i<10;i++){
        for(j=0;j<10; j++){
            if(vetor[i] < vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
}
void CHAMA(int vetor[]){
    int i;

    system("cls");
    printf("Digite os 10 numeros do vetor: ");
    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    VET(vetor);

    system("cls");
    printf("Vetor resultante em ordem crescente: ");
    for(i=0; i<10; i++){
        printf(" %d",vetor[i]);
    }
}

int main(){

    int vetor[10];

    CHAMA(vetor);
}