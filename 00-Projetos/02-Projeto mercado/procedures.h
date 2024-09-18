  #include "bibli.c"

  FILE* abrirArquivo(char *arquivo,char *modo){
    FILE *arq = fopen(arquivo,modo);

    if(arq==NULL){
      printf("Erro ao abrir o arquivo");
      menuPrincipal();
    }
    return arq;
  }

  void lerArquivo(){
    FILE *arq = abrirArquivo("produtos.txt", "r");
    int i=0;
    while(fscanf(arq,"%d\n%[^\n]\n%f\n%d\n",&produto[i].codigo, produto[i].nome,&produto[i].valor,&produto[i].quantidade)==4){
      i++;
    }
    fclose(arq);
  }

  void gravarArquivo(char *arquivo, char *modo){

    FILE *arq = abrirArquivo(arquivo, modo);

      int i;
      for(i=0;i<50;i++){
        if(produto[i].codigo != 0){
          fprintf(arq,"%d\n%s\n%f\n%d\n",produto[i].codigo, produto[i].nome,produto[i].valor,produto[i].quantidade);
          fflush(stdin);
        }
      }
      
      fclose(arq);
      printf("\n\nDados gravados com sucesso.");

  }

  void lerIndice(int *indice){
    FILE *arq = fopen("indice.txt","r");

    if(arq!=NULL){
      fscanf(arq,"%d",indice);
      fclose(arq);
    }else{
      *indice = 0;
    }
  }

  void gravarIndice(int indice){
    FILE *arq = abrirArquivo("indice.txt","w");

    fprintf(arq,"%d",indice);
    fclose(arq);
  }

  void cadastrarProduto(){

    lerArquivo();
    int i,cod,adicionar,produtoEncontrado=0;
      printf("--------------------------Cadastrar Produto--------------------------");
      printf("\n\nDigite o código do produto: ");
      scanf("%d", &cod);
    for(i=0;i<50;i++){
      if(cod == produto[i].codigo){
      produtoEncontrado=1;
      printf("Produto já cadastrado!\n\n%d\n%s\n%f\n%d\n\nDigite a quantidade que deseja adicionar: ",produto[i].codigo, produto[i].nome,produto[i].valor,produto[i].quantidade);
      scanf("%d",&adicionar);

      produto[i].quantidade = produto[i].quantidade + adicionar;

      gravarArquivo("produtos.txt","w");
    
      break;
      }
    }
    if(!produtoEncontrado) {

      int indice;
      lerIndice(&indice);
      
      for(i=0;i<50;i++){
        if (produto[i].codigo == 0) {

      produto[i].codigo = cod;
      fflush(stdin);
      
      printf("\nDigite o nome do produto: ");
      scanf("%[^\n]", produto[i].nome);
      printf("\n");
      fflush(stdin);

      printf("Digite o valor do produto: ");
      scanf("%f", &produto[i].valor);
      fflush(stdin);

      printf("\nDigite a quantidade de produtos no estoque: ");
      scanf("%d", &produto[i].quantidade);
      fflush(stdin);

      gravarArquivo("produtos.txt","w");
      indice++;
      gravarIndice(indice);
      break;

      system("cls");
      }
     }
    }
      printf("Cadastro concluído!");
      Sleep(2000);
      system("cls");
      menuPrincipal();
  } 

  void listarProdutos(){


    int i,indice;
    lerArquivo();
    lerIndice(&indice);

    printf("--------------------------Listar Produtos--------------------------");
    for(i=0;i<=indice;i++){
      printf("\n%d\nCódigo: %d\nNome: %s\nValor: %.2f\nQuantidade em estoque: %d",i, produto[i].codigo,produto[i].nome,produto[i].valor,produto[i].quantidade);
    }
    
  }
