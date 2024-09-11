
/*Sabe-se que:
 1 pe = 12 polegadas
 1 jarda = 3 pes
 1 milha = 1760 jardas
 Faca um programa que que receba uma medida em pes, faca a conversoes a
 seguir e mostre os resultados.
 a) Polegadas;
 b) Jardas;
 c) Milhas.
 d) Pes
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float poleg, pes, jard, mil;

    printf("Digite a medida em pes: ");
    scanf("%f", &pes);

    poleg = pes * 12;
    jard = pes / 3;
    mil = jard / 1760;

    printf("\nValor em pes: %f", pes);
    printf("\nValor em polegadas: %f", poleg);
    printf("\nValor em Jardas: %f", jard);
    printf("\nValor em milhas: %f", mil);

return 0;
}