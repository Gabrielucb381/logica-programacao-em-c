#include <stdio.h>

/*
 Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir verifique e mostre qual a classificação dessa pessoa.

 | Altura            |                         Peso                        |
|--------------------|------------------------|
|                    | Até 60   | Entre 60 e 90 (inclusive)  | Acima de 90 |
| Menores que 1,20   | A        | D                          | G           |
| De 1,20 a 1,70     | B        | E                          | H           |
| Maiores que 1,70   | C        | F                          | I           |

*/

int main(){

float altura, peso;

printf("Digite sua altura: (Não esqueça o ponto final '.' para separar metro de centimetros");
scanf("%f", &altura);

printf("Digite o seu peso: ");
scanf("%f", &peso);

if (altura < 1.20){
    if (peso <= 60)
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'A'", altura,peso);
    else if (peso > 60 && peso <= 90)
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'D'",altura,peso);
    else 
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'G'",altura,peso);

} else if (altura >= 1.20 && altura <= 1.70){
    if (peso <= 60)
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'B'", altura,peso);
    else if (peso > 60 && peso <= 90)
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'E'",altura,peso);
    else 
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'H'",altura,peso);

} else {
    if (peso <= 60)
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'C'", altura,peso);
    else if (peso > 60 && peso <= 90)
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'F'",altura,peso);
    else
        printf("\nA sua altura e: %.2f\tO seu peso e: %.2f\tA classificacao e: 'I'",altura,peso);

}

}