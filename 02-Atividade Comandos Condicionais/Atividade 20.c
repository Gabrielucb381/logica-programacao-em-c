#include <stdio.h>

/* Faca um programa que receba:
● O codigo de um produto comprado, supondo que a digitacao do codigo do produto seja sempre valida, ou seja, um numero inteiro entre 1 e 10;
● O peso do produto em quilos;
● O codigo do pais de origem, supondo que a digitacao do codigo do pais seja sempre valida, ou seja, um numero entre 1 e 3.

Tabelas:

Tabela 1 - Codigo do Pais de Origem | Imposto
1                                   |   0%
2                                   |   15%
3                                   |   25%

Tabela 2 - Codigo do Produto | Preco por Grama
1 a 4                        |       10
5 a 7                        |       25
8 a 10                       |       35

Calcule e mostre:
● O peso do produto convertido em gramas;
● O preco total do produto comprado;
● O valor do imposto, sabendo-se que o imposto e cobrado sobre o preco total do produto comprado e que depende do pais de origem;
● O valor total, preco total do produto mais imposto.
*/

int main() {
    int codigo_produto, codigo_pais;
    float peso_quilos, peso_gramas, preco_total, preco_por_grama, imposto, valor_total;

    
    printf("Digite o codigo do produto (1 a 10): ");
    scanf("%d", &codigo_produto);

    printf("Digite o peso do produto em quilos: ");
    scanf("%f", &peso_quilos);

    printf("Digite o codigo do pais de origem (1 a 3): ");
    scanf("%d", &codigo_pais);

    
    peso_gramas = peso_quilos * 1000;

   
    if (codigo_produto >= 1 && codigo_produto <= 4) {
        preco_por_grama = 10;
    } else if (codigo_produto >= 5 && codigo_produto <= 7) {
        preco_por_grama = 25;
    } else {
        preco_por_grama = 35;
    }

    
    preco_total = peso_gramas * preco_por_grama;

    
    if (codigo_pais == 1) {
        imposto = 0;
    } else if (codigo_pais == 2) {
        imposto = 0.15 * preco_total;
    } else {
        imposto = 0.25 * preco_total;
    }

    
    valor_total = preco_total + imposto;

    
    printf("\nPeso do produto em gramas: %.2f\n", peso_gramas);
    printf("Preco total do produto: R$%.2f\n", preco_total);
    printf("Imposto sobre o produto: R$%.2f\n", imposto);
    printf("Valor total: R$%.2f\n", valor_total);

    return 0;
}
