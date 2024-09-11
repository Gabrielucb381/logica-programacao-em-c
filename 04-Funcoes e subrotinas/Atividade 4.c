
/* Faca uma funcao que receba um unico valor representando segundos. Essa funcao devera
converte-lo para horas, minutos e segundos. Os segundos devem ser passados como parametro.*/

#include <stdio.h>

void CONV(int segundos, int *horas, int *minutos, int *segRes){

    *horas = segundos / 3600;
    segundos %= 3600;
    *minutos = segundos / 60;
    *segRes=segundos % 60;
}

int main(){
    int segundos, minutos, horas, segRes;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    CONV(segundos, &horas, &minutos, &segRes);
    printf("A conversao de %d e: %d:%d:%.2d",segundos,horas,minutos,segRes);

    return 0;
}