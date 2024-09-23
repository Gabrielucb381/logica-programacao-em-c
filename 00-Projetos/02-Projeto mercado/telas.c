#include "procedures.h"

void menuPrincipal(){

int x;

  Sleep(1500);
  system("cls");
  printf("--------------------------Seja bem-vindo--------------------------\n-------------------Mercado de esquina do Weldes-------------------");
  printf("\n\n1-Cadastrar Produto\n2-Listar Produtos\n3-Comprar Produto\n4-Visualizar Carrinho\n5-Fechar Pedido\n6-Sair do Sistema\nEscolha uma opcao: \n");
  scanf("%d", &x);

  switch (x)
  {
  case 1:
    cadastrarProduto();    
    break;
  case 2:
    listarProdutos();
    break;
  case 3:
    comprarProduto();
    break;
  case 4:
    listarCarrinho();
    break;
  case 5:
    receberPagamento();
    break;
  case 6:
    exit(1);
    break;  
  default:
    printf("Opcao invalida. Por favor, digite um numero de 1 a 6!");
    break;
  }
}
