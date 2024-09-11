
/*Faca um programa contendo uma sub-rotina que retorne 1 caso o numero digitado
seja positivo ou zero se negativo.*/

#include <stdio.h>
#include <stdlib.h>

int FUNC(int a)
{ int resposta;
	if (a > 0)
		resposta = 1;
	else
		resposta = 0;
	return resposta;
}

int main(){
	
	int a;
	do
	{   printf("digite um valor inteiro: ");
		scanf("%d", &a);	
	} while (a == 0);
	
	printf("\n%d", FUNC(a));
	return 0;
}