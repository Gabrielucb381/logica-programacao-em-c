
/* Crie uma sub-rotina que receba como parametro um vetor de dez elementos inteiros
de 1 a 20 e mostre em outro vetor o valor do fatorial de cada elemento do primeiro
vetor. */

#include <stdio.h>
#include<locale.h>

void Vetor(){

    int i,j,vetor1[10],vetor2[10],fat;
    printf("Digite 10 numeros (1 a 20): ");

    for(i=0; i<10; i++){

    printf("\n%dº numero: ",i+1);
    scanf("%d", &vetor1[i]);

    while (vetor1[i] < 1 || vetor1[i] > 20)
    {
        printf("Numero invalido. Digite um numero entre 1 e 20: ");
        scanf("%d", &vetor1[i]);
    }
    
    }
    for(i=0; i<10; i++){
        fat=1;
        for(j=vetor1[i]; j>0; j--){
            fat = fat*j;
        }
        vetor2[i] = fat;
    }
    printf("Vetor 2 (fatoriais){");
    for(i=0;i<10;i++){
        printf("%d ",vetor2[i]);
    }
    printf("}");
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    Vetor();
}
