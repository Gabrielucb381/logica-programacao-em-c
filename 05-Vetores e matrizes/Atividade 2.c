
/* Preencha dois vetores de 5 posicoes cada, e faca a troca de valores entre os vetores, de modo que o primeiro vetor receba os valores do segundo vetor e o segundo vetor receba os valores do primeiro vetor. Exiba os vetores antes e apos a troca. */

#include <stdio.h>
#include <stdlib.h>

void VETORES(int vet1[],int vet2[]){
    int i;

    for (i=0; i<5; i++){
        printf("\nDigite o %d elemento do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);

        printf("Digite o %d elemento do vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    }system("cls");
    printf("Os numeros do vetor 1 sao: %d %d %d %d %d",vet1[0],vet1[1],vet1[2],vet1[3],vet1[4]);
    printf("\nOs numeros do vetor 2 sao: %d %d %d %d %d",vet2[0],vet2[1],vet2[2],vet2[3],vet2[4]);
}

void TROCA(int vet1[],int vet2[]){
    
    for (int i=0; i<=4; i++){
        int aux = vet1[i];
        vet1[i] = vet2[i];
        vet2[i] = aux;        
    }printf("\n\nOs numeros no vetor 1 apos a troca sao: %d %d %d %d %d",vet1[0],vet1[1],vet1[2],vet1[3],vet1[4]);
     printf("\nOs numeros no vetor 2 apos a troca sao: %d %d %d %d %d",vet2[0],vet2[1],vet2[2],vet2[3],vet2[4]);
}

int main(){
    int vet1[5],vet2[5];
    VETORES(vet1,vet2);
    TROCA(vet1,vet2);
}