#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*A nota final de um estudante e calculada a partir de tres notas atribuidas
respectivamente a um trabalho de laboratorio, a uma avaliação semestral e a um
exame final. A media das tres notas mencionadas anteriormente obedece aos pesos a
seguir:

         Nota                 Peso
Trabalho de laboratorio        2
   Avaliacao semestral         3
       Exame final             5

Faça um programa que receba as tres notas, calcule e mostre a media
ponderada e o conceito que segue a tabela abaixo: 

| Media Ponderada   | Conceito |
|-------------------|----------|
| 8,00 até 10,00    | A        |
| 7,00 até 7,99     | B        |
| 6,00 até 6,99     | C        |
| 5,00 até 5,99     | D        |
| 0,00 até 4,99     | E        |
*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    float trabLab, avalSem, examFin, pesoTL, pesoAS, pesoEF, medPond;

    printf("Digite a nota do tabalho de laborat�rio: ");
    scanf("%f", &trabLab);

    printf("\nDigite a nota da avaliacao semestral: ");
    scanf("%f", &avalSem);

    printf("\nDigite a nota do exame final: ");
    scanf("%f", &examFin);

    pesoTL = 2;
    pesoAS = 3;
    pesoEF = 5;

    medPond = ((trabLab * pesoTL) + (avalSem * pesoAS) + (examFin * pesoEF))/10;


    printf("\nA media ponderada e: %.2f \n", medPond);

    if (medPond >= 0 && medPond <= 4.99){
        printf("Conceito de aprovacao: E\n");
    }   else if (medPond >= 5 && medPond <= 5.99){
            printf("Conceito de aprovacao: D\n");
    }      else if (medPond >= 6 && medPond <= 6.99){
                printf("Conceito de aprovacao: C\n");
    }          else if (medPond >= 7 && medPond <= 7.99){
                    printf("Conceito de aprovacao: B\n");
    }              else if (medPond >= 8 && medPond <= 10){
                        printf("Conceito de aprovacao: A");
    }



}
