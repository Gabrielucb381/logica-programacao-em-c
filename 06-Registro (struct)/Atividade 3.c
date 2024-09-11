
/*Faca um programa que controle o estoque de uma loja de brinquedos. Atualmente, no estoque ha 40 itens, cada um contendo codigo, descricao, preco de compra, preco de venda, quantidade em estoque e estoque minimo. O programa devera:

a) Criar uma rotina para cadastrar os produtos.
b) Criar uma rotina para mostrar o valor do lucro obtido com a venda de determinado produto e o percentual que esse valor representa.
c) Criar uma rotina que mostre os produtos com quantidade em estoque abaixo do estoque minimo permitido.

*/

#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 40

struct Produto {
    int codigo;
    char descricao[50];
    float preco_compra;
    float preco_venda;
    int quantidade;
    int estoque_minimo;
};

void cadastrar_produto(struct Produto produtos[], int *total) {
    if (*total >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }

    printf("Digite o código do produto: ");
    scanf("%d", &produtos[*total].codigo);

    printf("Digite a descrição do produto: ");
    scanf("%s", produtos[*total].descricao);

    printf("Digite o preço de compra do produto: ");
    scanf("%f", &produtos[*total].preco_compra);

    printf("Digite o preço de venda do produto: ");
    scanf("%f", &produtos[*total].preco_venda);

    printf("Digite a quantidade em estoque do produto: ");
    scanf("%d", &produtos[*total].quantidade);

    printf("Digite o estoque mínimo do produto: ");
    scanf("%d", &produtos[*total].estoque_minimo);

    (*total)++;
    printf("Produto cadastrado com sucesso.\n");
}

void calcular_lucro(struct Produto produtos[], int total, int codigo) {
    float lucro;
    int indice = -1;

    for (int i = 0; i < total; i++) {
        if (produtos[i].codigo == codigo) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        printf("Produto não encontrado.\n");
        return;
    }

    lucro = (produtos[indice].preco_venda - produtos[indice].preco_compra) * produtos[indice].quantidade;
    float percentual_lucro = (lucro / (produtos[indice].preco_compra * produtos[indice].quantidade)) * 100;

    printf("Lucro obtido com a venda do produto %d (%s): R$ %.2f\n", produtos[indice].codigo, produtos[indice].descricao, lucro);
    printf("Percentual desse lucro em relação ao custo total do produto: %.2f%%\n", percentual_lucro);
}

void mostrar_produtos_abaixo_estoque_minimo(struct Produto produtos[], int total) {
    printf("Produtos com quantidade em estoque abaixo do mínimo:\n");
    for (int i = 0; i < total; i++) {
        if (produtos[i].quantidade < produtos[i].estoque_minimo) {
            printf("Código: %d, Descrição: %s, Quantidade em Estoque: %d, Estoque Mínimo: %d\n",
                   produtos[i].codigo, produtos[i].descricao, produtos[i].quantidade, produtos[i].estoque_minimo);
        }
    }
}

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int total_produtos = 0;
    int opcao, codigo;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Calcular lucro de venda de produto\n");
        printf("3. Mostrar produtos com estoque abaixo do mínimo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_produto(produtos, &total_produtos);
                break;
            case 2:
                printf("Digite o código do produto: ");
                scanf("%d", &codigo);
                calcular_lucro(produtos, total_produtos, codigo);
                break;
            case 3:
                mostrar_produtos_abaixo_estoque_minimo(produtos, total_produtos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
