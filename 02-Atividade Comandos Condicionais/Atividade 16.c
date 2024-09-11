#include <stdio.h>

/*Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o produto poderá ter seu preço aumentado ou diminuido. Para alterar o preço o produto deve preencher pelo menos um dos requisitos a seguir:

|                      Requisitos                                |               Reajustes              |
|------------------------------|--------------------------------|
| **Venda Media Mensal**        | **Preco Atual**                | **% de Aumento** | **% de Diminuicao**  |
| < 500                         | < R$30,00                      | 10               | 5                    |
| >=500 e <1.200                | >=R$30,00 e <=R$80,00          | 15               | -                    |
| >=1.200                       | >R$80,00                       | -                | 20                   |

Faça um programa que receba o preço atual e a venda mensal média do produto, calcule e mostre o novo preço.
*/

int main(){

    float venMedMen, preAtu, novoPre, reaj;


    printf("Digite a venda media mensal: ");
    scanf("%f", &venMedMen);

    printf("Digite o preco atual: ");
    scanf("%f", &preAtu);

    if (venMedMen < 500 || preAtu < 30)
        reaj = preAtu + (preAtu * 10/100);
    else if ((venMedMen >= 500 && venMedMen < 1200) || (preAtu >= 30 && preAtu < 80))
        reaj = preAtu + (preAtu * 15/100);
    else
        reaj = preAtu - (preAtu * 20/100);

    novoPre = preAtu + (reaj);

    printf("O novo preco do produto e: R$%.2f", novoPre);

    return 0;
}