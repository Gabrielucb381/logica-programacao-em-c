
/* Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de objetos. O vendedor recebe, mensalmente, salario de R$ 545,00, acrescido de 5% do valor total de suas vendas. O valor unitario dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de cada peca deve ficar em outro vetor, mas na mesma posicao. Crie um programa que receba os precos e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho dez). Depois, determine e mostre:

um relatorio contendo quantidade vendida, valor unitario e valor total de cada objeto.
Ao final, devera ser mostrado o valor geral das vendas e o valor da comissao que sera paga ao vendedor;
o valor do objeto mais vendido e sua posicao no vetor (nao se preocupe com empates).
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void VETORES(int vet1[], float vet2[]){
    system("cls");
    int i;
    for(i=0; i<10; i++){
        printf("Digite a quantidade vendida do produto %d: ",i+1);
        scanf("%d",&vet1[i]);
        printf("Digite o valor do produto %d: R$",i+1);
        scanf("%f",&vet2[i]);
        printf("\n\n");
    

    }

}
void RELATORIO(int vet1[], float vet2[]){
    int i;
    float valTotalPro=0, valTotVend=0;
    for(i=0; i<10; i++){
        valTotalPro = vet2[i]*(float)vet1[i];
    printf("\nProduto %d: \nQuantidade vendida: %d \nValor unitario: %.2f \nValor total: %.2f\n\n",i+1, vet1[i], vet2[i], valTotalPro);
    Sleep(500);

    valTotVend += valTotalPro;
    }float comissao = 545.00 + (valTotVend * 5/100);
    printf("Valor total das vendas e: R$%.2f \nO valor do salario com comissao e: R$%.2f",valTotVend,comissao);

}
int main(){

    system("cls");
    int vet1[10];
	float vet2[10];
    VETORES(vet1,vet2);
    RELATORIO(vet1,vet2);

}
