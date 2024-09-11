
/* Faca um programa que realize o cadastro de contas bancarias com as seguintes informacoes: numero da conta, nome do cliente e saldo. O banco permitira o cadastramento de apenas 15 contas e nao podera haver mais do que uma conta com o mesmo numero. Crie o menu de opcoes a seguir:

1-Cadastrar contas
2-Visualizar todas as contas de determinado cliente
3-Excluir a conta com menor saldo (supondo a existencia de saldos iguais)
4-Sair
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_CONTAS 15

struct Conta {
    int numero;
    char nome[50];
    float saldo;
};

void buscar_conta(struct Conta contas[], int total, int numero, int *indice) {
    *indice = -1;
    for (int i = 0; i < total; i++) {
        if (contas[i].numero == numero) {
            *indice = i;
            return;
        }
    }
}

void cadastrar_conta(struct Conta contas[], int *total) {
    if (*total >= MAX_CONTAS) {
        printf("Limite de contas atingido.\n");
        return;
    }

    struct Conta nova_conta;
    int indice;

    printf("Digite o número da conta: ");
    scanf("%d", &nova_conta.numero);

    buscar_conta(contas, *total, nova_conta.numero, &indice);
    if (indice != -1) {
        printf("Já existe uma conta com esse número.\n");
        return;
    }

    printf("Digite o nome do cliente: ");
    scanf("%s", nova_conta.nome);
    printf("Digite o saldo da conta: ");
    scanf("%f", &nova_conta.saldo);

    contas[*total] = nova_conta;
    (*total)++;
    printf("Conta cadastrada com sucesso.\n");
}

void visualizar_contas(struct Conta contas[], int total) {
    char nome[50];
    int encontrado = 0;

    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    for (int i = 0; i < total; i++) {
        if (strcmp(contas[i].nome, nome) == 0) {
            printf("Número da conta: %d, Nome: %s, Saldo: %.2f\n",
                   contas[i].numero, contas[i].nome, contas[i].saldo);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhuma conta encontrada para o cliente %s.\n", nome);
    }
}

void excluir_conta_menor_saldo(struct Conta contas[], int *total) {
    if (*total == 0) {
        printf("Nenhuma conta cadastrada.\n");
        return;
    }

    int indice_menor_saldo = 0;

    for (int i = 1; i < *total; i++) {
        if (contas[i].saldo < contas[indice_menor_saldo].saldo) {
            indice_menor_saldo = i;
        }
    }

    printf("Conta com menor saldo excluída: Número da conta: %d, Nome: %s, Saldo: %.2f\n",
           contas[indice_menor_saldo].numero, contas[indice_menor_saldo].nome, contas[indice_menor_saldo].saldo);

    for (int i = indice_menor_saldo; i < *total - 1; i++) {
        contas[i] = contas[i + 1];
    }

    (*total)--;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct Conta contas[MAX_CONTAS];
    int total_contas = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar contas\n");
        printf("2. Visualizar todas as contas de determinado cliente\n");
        printf("3. Excluir a conta com menor saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_conta(contas, &total_contas);
                break;
            case 2:
                visualizar_contas(contas, total_contas);
                break;
            case 3:
                excluir_conta_menor_saldo(contas, &total_contas);
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
