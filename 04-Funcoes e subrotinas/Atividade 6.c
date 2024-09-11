
/* Elabore um programa contendo uma sub-rotina que receba tres notas e uma letra como
parametros. Se a letra for A, então deve ser retornada a media aritmetica das notas; se a letra
for P, então deve ser retornada a media ponderada, com pesos 5, 3 e 2, respectivamente. A
media calculada devera ser devolvida ao programa principal para, então, ser mostrada. */

#include <stdio.h>

float NOTA(float n1, float n2, float n3, char letra){

    float somaTot;
    float s1 = n1 * 5;
    float s2 = n2 * 3;
    float s3 = n3 * 2;
    

    if (letra == 'A' || 'a')
        somaTot = (n1 + n2 + n3)/3;
    

    if (letra == 'P' || 'p')
        somaTot = (s1 + s2 +s3)/10;
    
    printf("A soma das 3 notas e %.2f", somaTot);

     return somaTot;
}

int main (){

    float n1, n2, n3;
    char letra;

    printf("Digite 'A' para calcula a media aritmetica e 'P' para calcular a media ponderada: ");
    scanf("%c", &letra);

    printf("\n\nDigite as 3 notas: ");
    scanf("%f %f %f", &n1,&n2,&n3);

   NOTA(n1, n2, n3, letra);

}