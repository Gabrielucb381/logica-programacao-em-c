
/* Faca um programa que preencha um vetor com oito numeros inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os numeros positivos; o segundo deve conter os numeros negativos. Cada vetor resultante vai ter, no maximo, oito posicoes, que poderao nao ser completamente utilizados. */

#include <stdio.h>
#include <windows.h>

void VETORES(int vet1[], int vet2[], int vet3[]){

    int i;
    for(i=0; i<8; i++){
        printf("Digite o valor do numero %d: ",i+1);
        scanf("%d", &vet1[i]);

        if(vet1[i]%2==0)
        vet2[i] = vet1[i];
        else
        vet3[i] = vet1[i];

    }printf("Os numeros pares sao: ");
    for (i = 0; i < 8; i++) {
        if(vet2[i] != 0)
        printf("%d ", vet2[i]);
    }
    
    printf("\nOs numeros impares sao: ");
    for (i = 0; i < 8; i++) {
        if(vet3[i] != 0)
        printf("%d ", vet3[i]);
    }
}

int main(){

    int vet1[8],vet2[8] = {0},vet3[8] = {0};
    VETORES(vet1,vet2,vet3);
}