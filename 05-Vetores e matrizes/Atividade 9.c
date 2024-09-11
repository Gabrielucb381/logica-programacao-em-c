
/* Faca um programa que preencha dois vetores com cinco elementos numericos cada e depois ordene-os de maneira crescente. Devera ser gerado um terceiro vetor com dez posicoes, composto pela juncao dos elementos dos vetores anteriores, tambem ordenado de maneira crescente. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void VETOR(int vet1[], int vet2[]){

    int i,j,troca;
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(vet1[i]<vet1[j]){
                troca = vet1[i];
                vet1[i] = vet1[j];
                vet1[j] = troca;
            }

            if(vet2[i]<vet2[j]){
                troca = vet2[i];
                vet2[i] = vet2[j];
                vet2[j] = troca;
            }
        }
    }
}

void VETOR2(int vet1[], int vet2[], int vet3[]){

    int i;
    for(i=0; i<5; i++){
        vet3[i] = vet1[i];
        vet3[i + 5] = vet2[i];
        
    }
}

void VETOR3(int vet3[]){

    int i,j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vet3[i] < vet3[j]){
              int troca = vet3[i];
              vet3[i] = vet3[j];
              vet3[j] = troca;
            }
        }
    }
}

void CHAMA(int vet1[],int vet2[],int vet3[]){

    int i,j;
    system("cls");

        printf("Digite 5 numeros para o primeiro vetor: ");
    for(i=0; i<5; i++){
        scanf("%d",&vet1[i]);
    }printf("Digite os 5 numeros do segundo vetor: ");
    for(j=0; j<5; j++){
        scanf("%d",&vet2[j]);
    }
    VETOR(vet1,vet2);

    system("cls");

    printf("O primeiro vetor em ordem crescente e: {");
    for(i=0; i<5; i++){
        printf(" %d", vet1[i]);
    }printf(" }");
    printf("\nO segundo vetor em ordem crescente e: {");
    for(j=0; j<5; j++){
        printf(" %d", vet2[j]);
    }printf(" }");

    VETOR2(vet1,vet2,vet3);
    VETOR3(vet3);

    printf("\nO vetor combinado eh: {");
    for(i=0; i<10; i++){
    printf(" %d",vet3[i]);
    }printf(" }");
}
int main(){
    int vet1[5];
    int vet2[5];
    int vet3[10];

    CHAMA(vet1,vet2,vet3);
}