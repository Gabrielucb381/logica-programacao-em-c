
/* Faca um programa que preencha dois vetores de dez elementos numericos cada um e mostre o vetor resultante da intercalacao. */

#include <stdio.h>
#include <windows.h>
#include <locale.h>

void VETORES(int vet1[], int vet2[], int vet3[]){

    int i,j;
    for(i=0, j=0; i < 10; i++, j += 2){
        printf("Digite o %dº numero do grupo 1: ",i+1);
        scanf("%d", &vet1[i]);
        printf("Digite o %dº numero do grupo 2: ",i+1);
        scanf("%d", &vet2[i]);
        printf("\n");

        vet3[j] = vet1[i];
        vet3[j+1] = vet2[i];
    }
    printf("O vetor intercalado e: ");
    for(i=0; i<20; i++){
    printf("%d ",vet3[i]);
    }
}

int main(){

    int vet1[10],vet2[10],vet3[20];
    setlocale(LC_ALL, "Portuguese");
    VETORES(vet1,vet2,vet3);
}