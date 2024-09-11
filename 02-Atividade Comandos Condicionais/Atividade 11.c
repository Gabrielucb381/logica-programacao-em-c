#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/*Faça um programa que receba a hora de início de um jogo e a hora final do jogo
(cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a
duração do jogo (horas e minutos) sabendo-se que o tempo máximo de duração do
jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.*/

int main(){

    setlocale(LC_ALL,"Portuguese");

    int horaIni,minutosIni,horaFin,minFin;

    printf("Digite a hora e minutos do início do jogo: ");
    scanf("%d %d",&horaIni,&minutosIni);
    printf("\nDigite a hora e minutos do fim do jogo: ");
    scanf("%d %d",&horaFin,&minFin);

    system("cls");

    if(minFin<minutosIni){
        minFin += 60;
        horaFin -= 1;
    }
    if(horaFin<horaIni){
        horaFin += 24;
    }

    int durHora = horaFin - horaIni;
    int durMin = minFin - minutosIni;


    printf("A duracao foi de %d horas e %d minutos.", durHora, durMin);
}