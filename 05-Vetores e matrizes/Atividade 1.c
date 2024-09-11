
/* Faca um programa que preencha um vetor com nove numeros inteiros, calcule e mostre os numeros primos e suas respectivas posicoes.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void VETOR(int vet[]){

int i;
    for (i=0; i<9; i++){
        printf("digite o termo %d do vetor: ",i+1);
        scanf("%d", &vet[i]);
    }
}

void CALC(int vet[]){
    int i,j,div;
    system("cls");
    for(i=0; i<9; i++){
        div=0;
        for(j=1; j<=vet[i]; j++){
        if((vet[i]%j) == 0)
            div++;
        }
        if(div==2){
            printf("O numero %d e primo e ocupa a posicao %d do vetor.\n",vet[i],i);
            Sleep(500);
  }
 }
}
int main(){
    int vet[9];
    VETOR(vet);
    CALC(vet);
}