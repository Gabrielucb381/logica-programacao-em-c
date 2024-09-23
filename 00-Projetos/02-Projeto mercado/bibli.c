#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
FILE* abrirArquivo(char *arquivo, char *modo);
void lerArquivo(char *arquivo, char *modo);
void gravarArquivo(char *arquivo, char *modo);
void cadastrarProduto();
void listarProdutos();
void menuPrincipal();
int quantCompra[50];

struct
{
  int codigo;
  char nome[30];                  //Declaração dos atributos do produto;
  float valor;                  
  int quantidade;
}produto[50];

