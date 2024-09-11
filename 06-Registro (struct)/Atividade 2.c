
/* Uma empresa contratou 15 funcionarios temporarios. De acordo com o valor das vendas mensais, os funcionarios ganham pontos que determinarao seus salarios ao fim de cada mes. Sabe-se que eles trabalharao nos meses de novembro, dezembro/2022 e janeiro/2023. Faca um programa que:

a) Cadastre os nomes dos funcionarios e suas respectivas vendas mensais;
b) Calcule e mostre a pontuacao geral de cada funcionario nos tres meses. Sabe-se que R$ 1000,00 equivalem a 1 ponto;
c) Calcule e mostre a pontuacao geral de todos os funcionarios a cada mes;
d) Determine e mostre a maior pontuacao atingida nos tres meses, mostrando o nome do funcionario. Deverao ser desconsiderados os empates;
e) Determine e mostre o valor total vendido. */

#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 15
#define MESES 3
#define PONTOS_POR_1000 1000.0

struct Funcionario {
    char nome[50];
    float vendas[MESES];
    float pontos;
};

void cadastrar_funcionarios(struct Funcionario funcionarios[], int total) {
    for (int i = 0; i < total; i++) {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf("%s", funcionarios[i].nome);
        funcionarios[i].pontos = 0.0;
        for (int j = 0; j < MESES; j++) {
            printf("Digite as vendas do mês %d para %s: ", j + 1, funcionarios[i].nome);
            scanf("%f", &funcionarios[i].vendas[j]);
        }
    }
}

void calcular_pontuacao(struct Funcionario funcionarios[], int total) {
    for (int i = 0; i < total; i++) {
        funcionarios[i].pontos = 0.0;
        for (int j = 0; j < MESES; j++) {
            funcionarios[i].pontos += funcionarios[i].vendas[j] / PONTOS_POR_1000;
        }
    }
}

void mostrar_pontuacao_geral(struct Funcionario funcionarios[], int total) {
    printf("Pontuação geral de cada funcionário:\n");
    for (int i = 0; i < total; i++) {
        printf("Funcionário: %s, Pontuação: %.2f\n", funcionarios[i].nome, funcionarios[i].pontos);
    }
}

void mostrar_pontuacao_mensal(struct Funcionario funcionarios[], int total) {
    for (int j = 0; j < MESES; j++) {
        float pontuacao_total_mes = 0.0;
        for (int i = 0; i < total; i++) {
            pontuacao_total_mes += funcionarios[i].vendas[j] / PONTOS_POR_1000;
        }
        printf("Pontuação total no mês %d: %.2f\n", j + 1, pontuacao_total_mes);
    }
}

void mostrar_maior_pontuacao(struct Funcionario funcionarios[], int total) {
    float maior_pontuacao = 0.0;
    char nome_maior_pontuacao[50];

    for (int i = 0; i < total; i++) {
        for (int j = 0; j < MESES; j++) {
            float pontuacao_mes = funcionarios[i].vendas[j] / PONTOS_POR_1000;
            if (pontuacao_mes > maior_pontuacao) {
                maior_pontuacao = pontuacao_mes;
                strcpy(nome_maior_pontuacao, funcionarios[i].nome);
            }
        }
    }

    printf("Maior pontuação atingida nos três meses: %.2f pelo funcionário %s\n", maior_pontuacao, nome_maior_pontuacao);
}

void calcular_total_vendido(struct Funcionario funcionarios[], int total) {
    float total_vendas = 0.0;

    for (int i = 0; i < total; i++) {
        for (int j = 0; j < MESES; j++) {
            total_vendas += funcionarios[i].vendas[j];
        }
    }

    printf("Valor total vendido: %.2f\n", total_vendas);
}

int main() {
    struct Funcionario funcionarios[MAX_FUNCIONARIOS];
    int total_funcionarios = MAX_FUNCIONARIOS;

    cadastrar_funcionarios(funcionarios, total_funcionarios);
    calcular_pontuacao(funcionarios, total_funcionarios);
    mostrar_pontuacao_geral(funcionarios, total_funcionarios);
    mostrar_pontuacao_mensal(funcionarios, total_funcionarios);
    mostrar_maior_pontuacao(funcionarios, total_funcionarios);
    calcular_total_vendido(funcionarios, total_funcionarios);

    return 0;
}
