#include "procedures.h"


void menuPrincipal(){

  int x;

  printf("--------------------------Seja bem-vindo--------------------------\n-------------------Mercado de esquina do Weldes-------------------");
  printf("\n\n1-Cadastrar Produto\n2-Listar Produtos\n3-Comprar Produto\n4-Visualizar Carrinho\n5-Fechar Pedido\n6-Sair do Sistema\nEscolha uma opção: \n");
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
    
    break;
  case 4:
    
    break;
  case 5:
    
    break;
  case 6:
    
    break;  
  default:
    printf("Opção inválida. Por favor, digite um número de 1 a 6!");
    break;
  }

}