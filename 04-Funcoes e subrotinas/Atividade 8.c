
/* Crie uma sub-rotina que receba como parametro a altura e o sexo de uma pessoa e
retorne o seu peso ideal. Para homens: peso ideal = 72.7 * altura – 58; Para mulheres:
peso ideal: 62.1 * altura – 44.7. */

#include <stdio.h>

float PESOIDEAL(float altura, char sexo, float pesoId){
switch (sexo)
{
case 'F':
    pesoId= 62.1 * altura - 44.7;

    printf("Seu peso ideal e %f", pesoId);
    break;

case 'M':
pesoId = 72.7 * altura - 58;

    printf("Seu peso ideal e %f", pesoId);
    break;

    }return pesoId;
}

int main(){

float altura, pesoId;
char sexo;

printf("Vamos calcular seu peso ideal? Digite 'F' se você for do sexo feminino e 'M' se for do sexo masculino: ");
scanf("%c", &sexo);

printf("\nDigite agora a sua altura: (Exemplo: 1.69)");
scanf("%f", &altura);

PESOIDEAL(altura, sexo, pesoId);
}