
/*  Um metodo para o calculo de raiz quadradas de um número N ja era conhecido pelos
babilonios em... bom, ha muito tempo (tambem e conhecido como Metodo de Heron, um
matematico grego que o descreveu 20 seculos depois, perto do ano 50 DC). Comecando com
um valor inicial k (geralmente valendo 1), os babilonios geravam um novo valor de k de acordo
com a regra:
k = ((k + (n/k))/2)
A medida em que o processo é repetido, os novos valores de k se aproximam cada vez mais da
raiz de N. Faça um programa que leia o valor de N e exiba os primeiros doze valores calculados
com essa fórmula, verificando se eles realmente se aproximaram da raiz correta.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    float k, raiz;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    printf("\n");
    k = 1;

    for (i = 0; i < 12; i++) {
        k = (k + n / k) / 2;
        printf("k%d = %.10f\n", i+1, k);
    }

    raiz = powf(n, 1.0/2.0);
    printf("\nRaiz quadrada real de %d = %.10f\n", n, raiz);

    return 0;
}
