
/* Faca uma funcao que receba dois numeros inteiros e positivos por parametro e
retorne a soma dos N numeros inteiros existentes entre eles. */

#include <stdio.h>
#include <stdlib.h>

int FUNC(int a, int b){

int soma;

if (a>0 && b>0)
	soma = a+b;
	
	else 
		printf("Ambos os numeros devem ser maior que zero");
	return soma;
}
	int main(){
		int a,b;	
		
		do{
		printf("Digite dois numeros positivos: ");
		scanf("%d %d",&a,&b);
	} while (a<=0 || b<=0);
	
	printf("A soma de %d e %d e: %d",a,b, FUNC(a,b));
		
	}