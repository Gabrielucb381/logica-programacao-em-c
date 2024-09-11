
/* Seja a seguinte serie: 1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7, ...
Escreva um programa que seja capaz de gerar os N termos dessa serie. Esse número N deve ser
a entrada do programa.
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){

    int i,j,n, contaprint=1;
    i=1;
    j=4;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    do {
        printf("%d", i);
        contaprint = contaprint + 1;
        if (contaprint > n)
        break;

        printf("%d", j);
        contaprint = contaprint + 1;
        if (contaprint > n)
        break;

        printf("%d", j);
        contaprint = contaprint + 1;
        if (contaprint > n)
        break;

        i++;
        j++;
    } while (contaprint <= n);
    
}