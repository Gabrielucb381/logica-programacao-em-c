  #include "bibli.c"

  FILE* abrirArquivo(char *arquivo,char *modo){     
    FILE *arq = fopen(arquivo,modo);

    if(arq==NULL){
      printf("Erro ao abrir o arquivo! Tente adicionar um produto!\n");                 
      menuPrincipal();
    }
    return arq;
  }

  void lerArquivo(char *arquivo, char *modo){ 
    FILE *arq = abrirArquivo(arquivo,modo);
    int i=0;
    while(fscanf(arq,"%d\n%[^\n]\n%f\n%d\n",&produto[i].codigo, produto[i].nome,&produto[i].valor,&produto[i].quantidade)==4){
      i++;
    }
    fclose(arq);
  }

  void lerArquivoCarrinho(){
    int i=0;
    FILE *arq1 = abrirArquivo("carrinho.txt","r");
    while(fscanf(arq1,"\n%d\n%[^\n]\n%f\n%d\n",&produto[i].codigo, produto[i].nome,&produto[i].valor,&quantCompra[i])==4){
      i++;
    }
    fclose(arq1);
  }

  void lerIndice(int *indice){
    FILE *arq = fopen("indice.txt", "r");

    if(arq!=NULL){
      fscanf(arq,"%d",indice);
      fclose(arq);
    }else{
      *indice = 0;
    }
  }

  void lerIndiceCarrinho(int *indiceCarrinho){
     FILE *arq = fopen("indiceCarrinho.txt", "r");

    if(arq!=NULL){
      fscanf(arq,"%d",indiceCarrinho);
      fclose(arq);
    }else{
      *indiceCarrinho = 0;
    }
  }

  void gravarArquivo(char *arquivo, char *modo){

    FILE *arq = abrirArquivo(arquivo, modo);

    int i;
    for(i=0;i<50;i++){
      if(produto[i].codigo != 0){
        fprintf(arq,"\n%d\n%s\n%f\n%d\n",produto[i].codigo, produto[i].nome,produto[i].valor,produto[i].quantidade);
        fflush(stdin);
      }      
    }    
    fclose(arq);
    printf("\n\nDados gravados com sucesso.");
  }

  void gravarArquivoCarrinho(int codigo, char *nome, float valor, int quantCompra){

     FILE *arq1 = fopen("carrinho.txt","a");
        if(arq1==NULL){
          printf("Erro ao abrir o arquivo.");
          menuPrincipal();
        }else if(codigo != 0){
          fprintf(arq1,"\n%d\n%s\n%f\n%d\n",codigo, nome, valor, quantCompra);
        fflush(stdin);        
        }
        fclose(arq1);        
  }

  void gravarIndice(int indice){
    FILE *arq = abrirArquivo("indice.txt","w");

    fprintf(arq,"%d",indice);
    fclose(arq);
  }

  void gravarIndiceCarrinho(int indiceCarrinho){
    indiceCarrinho++;
        
        FILE *arq2 = fopen("indiceCarrinho.txt","w");
        if(arq2==NULL){
          printf("Erro ao abrir o arquivo.");
          menuPrincipal();
        }
        fprintf(arq2,"%d",indiceCarrinho);
        fclose(arq2);
  }

  void cadastrarProduto(){

    lerArquivo("produtos.txt","r");
    int i,cod,adicionar,produtoEncontrado=0;
      printf("--------------------------Cadastrar Produto--------------------------");
      printf("\n\nDigite o codigo do produto: ");
      scanf("%d", &cod);
      fflush(stdin);

    for(i=0;i<50;i++){
      if(cod == produto[i].codigo && cod > 0){
      produtoEncontrado=1;
      printf("Produto ja cadastrado!\n\n%d\n%s\n%f\n%d\n\nDigite a quantidade que deseja adicionar: ",produto[i].codigo, produto[i].nome,produto[i].valor,produto[i].quantidade);
      scanf("%d",&adicionar);

      produto[i].quantidade = produto[i].quantidade + adicionar;

      gravarArquivo("produtos.txt","w");
    
      break;
      }
    }
    if(!produtoEncontrado && cod > 0) {

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
      printf("Cadastro concluido!");
      }
     }
    }else{
        printf("Digite um codigo valido. Somente numeros maiores que zero.");
        menuPrincipal();
      }
    Sleep(2000);
    system("cls");
    menuPrincipal();
  } 

  void listarProdutos(){

    system("cls");
    int i,indice;
    lerArquivo("produtos.txt","r");
    lerIndice(&indice);

    printf("--------------------------Listar Produtos--------------------------");
    for(i=0;i<indice;i++){
      printf("\nCodigo: %d\t\tNome: %s\t\t\tQuantidade: %d\t\t\tValor unitario: R$%.2f\n",produto[i].codigo,produto[i].nome,produto[i].quantidade,produto[i].valor);
    }
    Sleep(800);
    menuPrincipal();    
  }

  void comprarProduto(){
    int indiceCarrinho;
    printf("--------------------------Comprar Produto--------------------------");
    lerArquivo("produtos.txt","r");
    lerIndiceCarrinho(&indiceCarrinho);
    int cod,i,produtoEncontrado = 0;
    printf("\nDigite o codigo do produto que deseja comprar: ");
    scanf("%d",&cod);
    fflush(stdin);

    for(i=0;i<50;i++){
      if(cod == produto[i].codigo){
        produtoEncontrado=1;
        printf("\nCodigo: %d\t\tNome: %s\t\t\tQuantidade: %d\t\t\tValor unitario: R$%.2f\n\nDigite a quantidade que deseja comprar: ",produto[i].codigo,produto[i].nome,produto[i].quantidade,produto[i].valor);
        scanf("%d", &quantCompra[i]);
        fflush(stdin);

        if(quantCompra[i] > produto[i].quantidade){
          printf("A quantidade informada eh maior que a quantidade no estoque\n");
          menuPrincipal();
        }else if(quantCompra[i] < produto[i].quantidade && quantCompra[i] > 0){
          produto[i].quantidade -= quantCompra[i];
          gravarArquivo("produtos.txt","w");
          gravarArquivoCarrinho(produto[i].codigo,produto[i].nome,produto[i].valor,quantCompra[i]);          
          gravarIndiceCarrinho(indiceCarrinho);
       
          Sleep(2000);
          system("cls");
          menuPrincipal();          
        }else{
          printf("\nA quantidade deve ser maior que 0.");
          menuPrincipal();
        }
      }else{
        printf("\nO codigo informado nao pertence a nenhum produto. Informe um codigo valido!\n");
        Sleep(2000);
        system("cls");
        comprarProduto();   
    }
    }
  }

  void listarCarrinho(){

    int i,indiceCarrinho=0;
    lerArquivoCarrinho();
    lerIndiceCarrinho(&indiceCarrinho);    

    for(i=0;i<indiceCarrinho;i++){
      printf("\nCodigo: %d\t\tNome: %s\t\t\tQuantidade: %d\t\t\tValor unitario: R$%.2f\n",produto[i].codigo,produto[i].nome,quantCompra[i],produto[i].valor);      
    }
    
    system("Pause");
    menuPrincipal();
  }
  void removerArquivo(char *arquivo){
    if(remove(arquivo)==0){
    
    }else{
      printf("Erro ao deletar o arquivo!");
      menuPrincipal();
    }
  }

  void receberPagamento(){

    int i,indiceCarrinho=0,x;
    float valorTotal=0;
    float valorItem[50];

    lerArquivoCarrinho();
    lerIndiceCarrinho(&indiceCarrinho);    

    for(i=0;i<indiceCarrinho;i++){
      valorTotal += produto[i].valor * quantCompra[i];
      valorItem[i] = produto[i].valor * quantCompra[i];

      printf("\nCodigo: %d\tNome: %s\t\tQuantidade: %d\t\tValor unitario: R$%.2f\tValor: R$%.2f",produto[i].codigo,produto[i].nome,quantCompra[i],produto[i].valor,valorItem[i]);      
    }    
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tValor total: %.2f\n", valorTotal);
    printf("Deseja finalizar a compra?\n\n1-Sim\n2-Nao\n");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
      removerArquivo("carrinho.txt");
      removerArquivo("indiceCarrinho.txt");
      menuPrincipal();
      break;
    case 2:
      menuPrincipal();
      break;
    default:
      break;
    }
  }