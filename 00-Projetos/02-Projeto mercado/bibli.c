#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
void menuPrincipal();
FILE* abrirArquivo(char *arquivo, char *modo);
void lerArquivo();
void gravarArquivo(char *arquivo, char *modo);
void cadastrarProduto();
void listarProdutos();

struct
{
  int codigo;
  char nome[30];                  //Declaração dos atributos do produto;
  float valor;                  
  int quantidade;
}produto[50];

