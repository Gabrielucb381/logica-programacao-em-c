#include <stdio.h>

/*Faca um programa que receba:
● O codigo do estado de origem da carga de um caminho, supondo que a digitacao do codigo do estado seja sempre valida, ou seja, um numero inteiro entre 1 e 5;
● O peso da carga do caminho em toneladas;
● O codigo da carga, supondo que a digitacao do codigo da carga seja sempre valida, ou seja, um numero inteiro entre 10 e 40.

Tabelas:

Tabela 1 - Codigo do Estado | Imposto
1                           |  35%
2                           |  25%
3                           |  15%
4                           |   5%
5                           | Isento

Tabela 2 - Codigo da Carga | Preco por Quilo
10 a 20                    |     100
21 a 30                    |     250
31 a 40                    |     340

Calcule e mostre:
● O peso da carga do caminho convertido em quilos;
● O preco da carga do caminho;
● O valor do imposto, sabendo-se que o imposto e cobrado sobre o preco da carga do caminho e que depende do estado de origem;
● O valor total transportado pelo caminho, carga mais imposto.*/

int main() {
    int codigo_estado, codigo_carga;
    float peso_carga, peso_quilos, preco_carga, imposto, preco_total;

    printf("Digite o codigo do estado de origem da carga (1 a 5): ");
    scanf("%d", &codigo_estado);

    printf("Digite o peso da carga do caminhao em toneladas: ");
    scanf("%f", &peso_carga);

    printf("Digite o codigo da carga (10 a 40): ");
    scanf("%d", &codigo_carga);

    
    peso_quilos = peso_carga * 1000;

   
    if (codigo_carga >= 10 && codigo_carga <= 20)
        preco_carga = peso_quilos * 100;
    else if (codigo_carga >= 21 && codigo_carga <= 30)
        preco_carga = peso_quilos * 250;
    else if (codigo_carga >= 31 && codigo_carga <= 40)
        preco_carga = peso_quilos * 340;
    else {
        printf("Codigo da carga invalido.\n");
        return 1; 
    }

  
    switch (codigo_estado) {
        case 1:
            imposto = preco_carga * 0.35;
            break;
        case 2:
            imposto = preco_carga * 0.25;
            break;
        case 3:
            imposto = preco_carga * 0.15;
            break;
        case 4:
            imposto = preco_carga * 0.05;
            break;
        case 5:
            imposto = 0;
            break;
        default:
            printf("Codigo do estado invalido.\n");
            return 1; 
    }

    
    preco_total = preco_carga + imposto;

    printf("\nPeso da carga do caminhao em quilos: %.2f\n", peso_quilos);
    printf("Preco da carga do caminhao: R$%.2f\n", preco_carga);
    printf("Valor do imposto: R$%.2f\n", imposto);
    printf("Valor total transportado pelo caminhao: R$%.2f\n", preco_total);

    return 0; 
}
