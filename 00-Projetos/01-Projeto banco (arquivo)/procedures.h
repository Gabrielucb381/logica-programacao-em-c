#include "bibli.h"

void conta_poupanca(){
    int x=0;
    int i=0;
    system("cls");
    ler_indice_poupanca(&i);

    do{
    printf("\tCONTA POUPANCA\n\n\t1-Agencia\n\t2-Numero da conta\n\t3-Nome do cliente\n\t4-CPF do cliente\n\t5-Data de nascimento\n\t6-Telefone de contato\n\t7-Endereco do cliente\n\t8-CEP\n\t9-Local\n\t10-Numero da casa\n\t11-Bairro\n\t12-Cidade\n\t13-Estado\n\t14-Senha do cliente\n\t15-Saldo do cliente\n\t0-Concluir\n\n\tDigite a opcao desejada: (Digite todas as informacoes) ");
    scanf("%d",&x);
    system("cls");

    switch (x)
    {
    case 1:
        rec_poup_agencia(i);
        break;
    case 2:
        rec_poup_nconta(i);
        break;
    case 3:
        rec_poup_nome(i);
        break;
    case 4:
        rec_poup_cpf(i);
        break;
   
    case 5:
        rec_poup_nasc(i);
        break; 
    case 6:
        rec_poup_tel(i);
        break; 
    case 7:
        rec_poup_end(i);
        break;
    case 8:
        rec_poup_cep(i);
        break;
    case 9:
        rec_poup_loc(i);
        break;
    case 10:
        rec_poup_ncasa(i);
        break;
    case 11:
        rec_poup_bairro(i);
        break;
    case 12:
        rec_poup_cid(i);
        break;
    case 13:
        rec_poup_est(i);
        break;
    case 14:
        rec_poup_scli(i);
        break;
    case 15:
        rec_poup_saldo(i);
        break;
    case 0:
        gravar_dados_poup(i);
        i++;
        sal_indice_poupanca(i);
        abertura_de_conta();
        break;
        default:
        printf("Opcao invalida.");
        break;
    }
}while(x != 0);
}

void conta_corrente(){
    int x=0;
    int i=0;
    system("cls");
    ler_indice_corrente(&i);
    do{
    printf("\tCONTA CORRENTE\n\n\t1-Agencia\n\t2-Numero da conta\n\t3-Limite da conta\n\t4-Data de vencimento\n\t5-Nome do cliente\n\t6-CPF do cliente\n\t7-Data de nascimento\n\t8-Telefone de contato\n\t9-Endereco do cliente\n\t10-CEP\n\t11-Local\n\t12-Numero da casa\n\t13-Bairro\n\t14-Cidade\n\t15-Estado\n\t16-Senha do cliente\n\t17-Saldo\n\t0-Concluir\n\n\tDigite a opcao desejada: (digite todas as informacoes) ");
    scanf("%d",&x);
   
    
    system("cls");
    switch (x)
    { 
        
    case 1:
        rec_cor_agencia(i);        
        break;
    case 2:
        rec_cor_nconta(i);       
        break;
    case 3:
        rec_cor_limconta(i);
        limite_total(i);       
        break;
    case 4:
        rec_cor_datavenc(i);        
        break;
    case 5:
        rec_cor_nome(i);      
        break;
    case 6:
        rec_cor_cpf(i);       
        break;
    case 7:
        rec_cor_nasc(i);      
        break;
    case 8:
        rec_cor_tel(i);       
        break;
    case 9:
        rec_cor_end(i);       
        break;
    case 10:
        rec_cor_cep(i);        
        break;
    case 11:
        rec_cor_loc(i);
        break;
    case 12:
        rec_cor_ncasa(i);    
        break;
    case 13:
        rec_cor_bairro(i);      
        break;
    case 14:
        rec_cor_cid(i);        
        break;
    case 15:
        rec_cor_est(i);     
        break;
    case 16:
        rec_cor_scli(i);        
        break;
    case 17:
        rec_cor_saldo(i);       
        break;
    default:
        printf("Opcao invalida.");
        break;
    case 0:       
        gravar_dados_cor(i);
        i++;
        sal_indice_corrente(i);
        abertura_de_conta();
        break;
    }
}while(x != 0);
}

void rec_poup_agencia(int i){
    system("cls");
    printf("\t1-Agencia\n\n\tDigite a agencia do novo cliente: ");
    fflush(stdin);
    scanf("%d", &CadPoup[i].agencia);
    printf("\n");}

void rec_poup_nconta(int i){
    system("cls");
    printf("\t2-Numero da conta\n\n\tDigite o numero da nova conta: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].n_conta);
    printf("\n");}

void rec_poup_nome(int i){
    system("cls");
    printf("\t3-Nome do cliente\n\n\tDigite o nome do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].nome);
    printf("\n");}

void rec_poup_cpf(int i){
    printf("\n");
    system("cls");
    printf("\t4-CPF do cliente\n\n\tDigite o CPF: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].cpf);
    printf("\n");}

    void rec_poup_nasc(int i){
    system("cls");
    printf("\t5-Data de nascimento do cliente\n\n\tDigite a data de nascimento (dia mes ano): ");
    fflush(stdin);
    scanf("%d %d %d", &CadPoup[i].nasc.dia, &CadPoup[i].nasc.mes, &CadPoup[i].nasc.ano);
    printf("\n");}

    void rec_poup_tel(int i){
    system("cls");
    printf("\t6-Telefone do cliente\n\n\tDigite o telefone de contato do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].telefone);
    printf("\n");}

    void rec_poup_end(int i){
    system("cls");
    printf("\t7-Endereco do cliente\n\n\tDigite o endereco do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].endereco);
    printf("\n");}
    
    void rec_poup_cep(int i){
    system("cls");
    printf("\t8-CEP do cliente\n\n\tDigite o CEP do endereco: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].cep);
    printf("\n");}
    
    void rec_poup_loc(int i){
    system("cls");
    printf("\t9- Local da residencia do cliente\n\n\tDigite O local: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].local);
    printf("\n");}
    
    void rec_poup_ncasa(int i){
    system("cls");
    printf("\t10-Numero da casa\n\n\tDigite o numero da casa: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].n_casa);
    printf("\n");}
    
    void rec_poup_bairro(int i){
    system("cls");
    printf("\t11-Bairro\n\n\tDigite o bairro: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].bairro);
    printf("\n");}
    
    void rec_poup_cid(int i){
    system("cls");
    printf("\t12-Cidade\n\n\tDigite a cidade: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].cidade);
    printf("\n");}
    
    void rec_poup_est(int i){
    system("cls");
    printf("\t13-Estado\n\n\tDigite o estado: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].estado);
    printf("\n");}
    
    void rec_poup_scli(int i){
    system("cls");
    printf("\t14-Senha do cliente\n\n\tDigite a senha do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i].senha_cliente);
    printf("\n");}
    
    void rec_poup_saldo(int i){
    system("cls");
    printf("\t15-Saldo do cliente:\n\n\tDigite o saldo do cliente: ");
    fflush(stdin);
    scanf("%f", &CadPoup[i].saldo);}

void rec_cor_agencia(int i){
    system("cls");
    printf("\t1-Agencia\n\n\tDigite a agencia do novo cliente: ");
    fflush(stdin);
    scanf("%d", &CadCor[i].agencia);
    printf("\n");}
    
    void rec_cor_limconta(int i){
    system("cls");
    printf("\t3-Limite\n\n\tDigite o limite da conta: ");
    fflush(stdin);
    scanf("%f", &CadCor[i].lim_cont);
    printf("\n");}

void rec_cor_datavenc(int i){
    system("cls");
    printf("\t4-Data de vencimento\n\n\tDigite a data de vencimento: (dia mes ano): ");
    fflush(stdin);
    scanf("%d %d %d", &CadCor[i].venc.dia, &CadCor[i].venc.mes, &CadCor[i].venc.ano);}
    
    void rec_cor_nconta(int i){
    system("cls");
    printf("\t2-Numero da conta\n\n\tDigite o numero da nova conta: ");
    fflush(stdin);
    scanf("%40[^\n]", CadCor[i].n_conta);
    printf("\n");}
    
    void rec_cor_nome(int i){
    system("cls");
    printf("\t5-Nome do cliente\n\n\tDigite o nome do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].nome);
    printf("\n");}
    
    void rec_cor_cpf(int i){
    system("cls");
    printf("\t6-CPF do cliente\n\n\tDigite o CPF: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].cpf);
    printf("\n");}
    
    void rec_cor_nasc(int i){
    system("cls");
    printf("\t7-Data de nascimento do cliente\n\n\tDigite a data de nascimento (dia mes ano): ");
    fflush(stdin);
    scanf("%d %d %d", &CadCor[i].nasc.dia, &CadCor[i].nasc.mes, &CadCor[i].nasc.ano);}
    
    void rec_cor_tel(int i){
    system("cls");
    printf("\t8-Telefone do cliente\n\n\tDigite o telefone de contato do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].telefone);
    printf("\n");}
    
    void rec_cor_end(int i){
    system("cls");
    printf("\t9-Endereco do cliente\n\n\tDigite o endereco do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].endereco);
    printf("\n");}
    
    void rec_cor_cep(int i){
    system("cls");
    printf("\t10-CEP do cliente\n\n\tDigite o CEP do endereco: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].cep);
    printf("\n");}
    
    void rec_cor_loc(int i){
    system("cls");
    printf("\t11- Local da residencia do cliente\n\n\tDigite o local: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].local);
    printf("\n");}
    
    void rec_cor_ncasa(int i){
    system("cls");
    printf("\t12-Numero da casa\n\n\tDigite o numero da casa: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].n_casa);
    printf("\n");}
    
    void rec_cor_bairro(int i){
    system("cls");
    printf("\t13-Bairro\n\n\tDigite o bairro: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].bairro);
    printf("\n");}
    
    void rec_cor_cid(int i){
    system("cls");
    printf("\t14-Cidade\n\n\tDigite a cidade: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].cidade);
    printf("\n");}
    
    void rec_cor_est(int i){
    system("cls");
    printf("\t15-Estado\n\n\tDigite o estado: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].estado);
    printf("\n");}
    
    void rec_cor_scli(int i){
    system("cls");
    printf("\t16-Senha do cliente\n\n\tDigite a senha do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i].senha_cliente);
    printf("\n");}
void rec_cor_saldo(int i){
    system("cls");
    printf("\t17-Saldo do cliente\n\n\tDigite o saldo: ");
    fflush(stdin);
    scanf("%f", &CadCor[i].saldo);}

    void gravar_dados_poup(int i){
    system("cls");
    FILE *arq;
    
    arq=fopen("poupancas.txt","a");
    
    if(arq==NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }else{
    fprintf(arq,"Agencia: %d\nNumero da conta: %s\nNome do cliente: %s\nCPF do cliente: %s\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %s\nEndereco do cliente: %s\nCEP do cliente: %s\nLocal: %s\nNumero da casa: %s\nBairro: %s\nCidade: %s\nEstado: %s\nSenha do cliente: %s\nSaldo: %f\n\n",CadPoup[i].agencia,CadPoup[i].n_conta,CadPoup[i].nome,CadPoup[i].cpf,CadPoup[i].nasc.dia,CadPoup[i].nasc.mes,CadPoup[i].nasc.ano,CadPoup[i].telefone,CadPoup[i].endereco,CadPoup[i].cep,CadPoup[i].local,CadPoup[i].n_casa,CadPoup[i].bairro,CadPoup[i].cidade,CadPoup[i].estado,CadPoup[i].senha_cliente,CadPoup[i].saldo);
    printf("Dados gravados com sucesso");
    }
    fclose(arq);
    Sleep(2500);
    system("cls");
 }

 void gravar_dados_cor(int i) {
    system("cls");
    FILE *arq = fopen("correntes.txt", "a");
    
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fprintf(arq, "Agencia: %d\nNumero da conta: %s\nLimite da conta: %f\nData de vencimento: %d/%d/%d\nNome do cliente: %s\nCPF do cliente: %s\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %s\nEndereco do cliente: %s\nCEP do cliente: %s\nLocal: %s\nNumero da casa: %s\nBairro: %s\nCidade: %s\nEstado: %s\nSenha do cliente: %s\nSaldo: %f\nLimite disponivel: %f\nLimite indisponivel: %f\n\n", CadCor[i].agencia, CadCor[i].n_conta, CadCor[i].lim_cont,CadCor[i].venc.dia, CadCor[i].venc.mes, CadCor[i].venc.ano,CadCor[i].nome, CadCor[i].cpf, CadCor[i].nasc.dia, CadCor[i].nasc.mes, CadCor[i].nasc.ano, CadCor[i].telefone, CadCor[i].endereco, CadCor[i].cep, CadCor[i].local, CadCor[i].n_casa, CadCor[i].bairro, CadCor[i].cidade, CadCor[i].estado, CadCor[i].senha_cliente, CadCor[i].saldo,CadCor[i].lim_disp,CadCor[i].lim_indis);

    printf("Dados gravados com sucesso.\n");
    fclose(arq);
    Sleep(2500);
    system("cls");
}



void sal_indice_poupanca(int i){

    FILE *arq=fopen("indicepou.txt","w");

    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);    
    }
    fprintf(arq,"%d",i);
    

    fclose(arq);
}
void ler_indice_poupanca(int *i){
    
    FILE *arq=fopen("indicepou.txt","r");

    if(arq!=NULL){
        fscanf(arq,"%d",i);
       
        fclose(arq);
    }else{
        *i=0;
    }
}
void sal_indice_corrente(int i){

    FILE *arq=fopen("indicecor.txt","w");

    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    fprintf(arq,"%d",i);
    fclose(arq);

}
void ler_indice_corrente(int *i){
    
    FILE *arq=fopen("indicecor.txt","r");

    if(arq!=NULL){
        fscanf(arq,"%d",i);
        fclose(arq);
    }else{
        *i=0;
    }
}


void consultar_arquivo() {
    int i = 0;
    FILE *arq = fopen("poupancas.txt", "r");
    FILE *arq1 = fopen("correntes.txt", "r");
    
    if (arq == NULL || arq1 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    while (fscanf(arq, 
            "Agencia: %d\nNumero da conta: %[^\n]\nNome do cliente: %[^\n]\nCPF do cliente: %[^\n]\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %[^\n]\nEndereco do cliente: %[^\n]\nCEP do cliente: %[^\n]\nLocal: %[^\n]\nNumero da casa: %[^\n]\nBairro: %[^\n]\nCidade: %[^\n]\nEstado: %[^\n]\nSenha do cliente: %[^\n]\nSaldo: %f\n\n", 
            &CadPoup[i].agencia, CadPoup[i].n_conta, CadPoup[i].nome, CadPoup[i].cpf, 
            &CadPoup[i].nasc.dia, &CadPoup[i].nasc.mes, &CadPoup[i].nasc.ano, 
            CadPoup[i].telefone, CadPoup[i].endereco, CadPoup[i].cep, 
            CadPoup[i].local, CadPoup[i].n_casa, CadPoup[i].bairro, 
            CadPoup[i].cidade, CadPoup[i].estado, CadPoup[i].senha_cliente, 
            &CadPoup[i].saldo) == 17) {
        i++;
    }
    while (fscanf(arq1, 
            "Agencia: %d\nNumero da conta: %[^\n]\nLimite da conta: %f\nData de vencimento: %d/%d/%d\nNome do cliente: %[^\n]\nCPF do cliente: %[^\n]\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %[^\n]\nEndereco do cliente: %[^\n]\nCEP do cliente: %[^\n]\nLocal: %[^\n]\nNumero da casa: %[^\n]\nBairro: %[^\n]\nCidade: %[^\n]\nEstado: %[^\n]\nSenha do cliente: %[^\n]\nSaldo: %f\nLimite disponivel: %f\nLimite indisponivel: %f\n\n", 
            &CadCor[i].agencia, CadCor[i].n_conta, &CadCor[i].lim_cont, 
            &CadCor[i].venc.dia, &CadCor[i].venc.mes, &CadCor[i].venc.ano, 
            CadCor[i].nome, CadCor[i].cpf, &CadCor[i].nasc.dia, 
            &CadCor[i].nasc.mes, &CadCor[i].nasc.ano, CadCor[i].telefone, 
            CadCor[i].endereco, CadCor[i].cep, CadCor[i].local, 
            CadCor[i].n_casa, CadCor[i].bairro, CadCor[i].cidade, 
            CadCor[i].estado, CadCor[i].senha_cliente, &CadCor[i].saldo,&CadCor[i].lim_disp,&CadCor[i].lim_indis) == 23) {
        i++;
    }

    fclose(arq);
    fclose(arq1);
}

void encerrar_conta() {
    int i = 0;
    consultar_arquivo();    
    ler_senha_adm(SENHA_ADMIN);
    char numero_conta[10];

    FILE *temp_p = fopen("temp_p.txt", "w");
    FILE *temp_c = fopen("temp_c.txt", "w");

    printf("Digite a conta que deseja encerrar: ");
    fflush(stdin);
    scanf("%[^\n]", numero_conta);
    printf("\n");

    int conta_encontrada = 0;

    for (i = 0; i < 250; i++) {
        if (strcmp(numero_conta, CadPoup[i].n_conta) == 0 && CadPoup[i].agencia != 0) {
            conta_encontrada = 1;
            strcpy(CadPoup[i].n_conta, "0");
            CadPoup[i].agencia=0;
        } else if (strcmp(numero_conta, CadPoup[i].n_conta) != 0 && CadPoup[i].agencia != 0) {
            fprintf(temp_p, "Agencia: %d\nNumero da conta: %s\nNome do cliente: %s\nCPF do cliente: %s\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %s\nEndereco do cliente: %s\nCEP do cliente: %s\nLocal: %s\nNumero da casa: %s\nBairro: %s\nCidade: %s\nEstado: %s\nSenha do cliente: %s\nSaldo: %f\n\n",
                    CadPoup[i].agencia, CadPoup[i].n_conta, CadPoup[i].nome, CadPoup[i].cpf,
                    CadPoup[i].nasc.dia, CadPoup[i].nasc.mes, CadPoup[i].nasc.ano,
                    CadPoup[i].telefone, CadPoup[i].endereco, CadPoup[i].cep,
                    CadPoup[i].local, CadPoup[i].n_casa, CadPoup[i].bairro,
                    CadPoup[i].cidade, CadPoup[i].estado, CadPoup[i].senha_cliente, CadPoup[i].saldo);
        }
    }
    

    if (conta_encontrada == 0) {
        for (i = 0; i < 250; i++) {
            if (strcmp(numero_conta, CadCor[i].n_conta) == 0 && CadCor[i].agencia != 0) {
                conta_encontrada = 2;
                strcpy(CadCor[i].n_conta, "0");
                CadCor[i].agencia=0;
            } else if (strcmp(numero_conta, CadCor[i].n_conta) != 0 && CadCor[i].agencia != 0) {
                fprintf(temp_c, "Agencia: %d\nNumero da conta: %s\nLimite da conta: %f\nData de vencimento: %d/%d/%d\nNome do cliente: %s\nCPF do cliente: %s\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %s\nEndereco do cliente: %s\nCEP do cliente: %s\nLocal: %s\nNumero da casa: %s\nBairro: %s\nCidade: %s\nEstado: %s\nSenha do cliente: %s\nSaldo: %f\nLimite disponivel: %f\nLimite indisponivel: %f\n\n",
                        CadCor[i].agencia, CadCor[i].n_conta, CadCor[i].lim_cont,
                        CadCor[i].venc.dia, CadCor[i].venc.mes, CadCor[i].venc.ano,
                        CadCor[i].nome, CadCor[i].cpf, CadCor[i].nasc.dia,
                        CadCor[i].nasc.mes, CadCor[i].nasc.ano, CadCor[i].telefone,
                        CadCor[i].endereco, CadCor[i].cep, CadCor[i].local,
                        CadCor[i].n_casa, CadCor[i].bairro, CadCor[i].cidade,
                        CadCor[i].estado, CadCor[i].senha_cliente, CadCor[i].saldo,CadCor[i].lim_disp,CadCor[i].lim_indis);
            }
        }
    }

    fclose(temp_c);
    fclose(temp_p);

    system("cls");

    if (conta_encontrada == 1) {
        remove("poupancas.txt");
        remove("temp_c.txt");
        rename("temp_p.txt", "poupancas.txt");
        printf("Conta poupanca encerrada com sucesso.\n\n");
        ler_indice_poupanca(&i);
        i--;
        sal_indice_poupanca(i);
    } else if (conta_encontrada == 2) {
        remove("correntes.txt");
        remove("temp_p.txt");
        rename("temp_c.txt", "correntes.txt");
        printf("Conta corrente encerrada com sucesso.\n\n");
        ler_indice_corrente(&i);
        i--;
        sal_indice_corrente(i);
    } else {
        printf("Conta nao encontrada.\n\n");
        remove("temp_c.txt");
        remove("temp_p.txt");
    }
}

void consultar_conta() {
    char nu_conta[30];
    int i = 0;
    consultar_arquivo();
 
    printf("Digite o numero da conta: ");
    fflush(stdin);
    scanf("%[^\n]", nu_conta);
    system("cls");

    int encontrada=0;    
    for(i = 0; i < 250; i++){
        if(strcmp(nu_conta, CadPoup[i].n_conta) == 0){
            printf("\n\tTipo de conta: Poupanca\n\tAgencia: %d\n\tNumero da conta: %s\n\tNome do cliente: %s\n\tCPF do cliente: %s\n\tSaldo da conta: R$%.2f\n\n", 
                CadPoup[i].agencia, CadPoup[i].n_conta, CadPoup[i].nome, 
                CadPoup[i].cpf,CadPoup[i].saldo);
                encontrada=1;
                break;
        }
    }
    for (i = 0; i < 250; i++) {
        if (strcmp(nu_conta, CadCor[i].n_conta) == 0) {
            printf("\n\tTipo de conta: Corrente\n\tAgencia: %d\n\tNumero da conta: %s\n\tNome do cliente: %s\n\tCPF do cliente: %s\n\tLimite: R$%.2f\n\tSaldo da conta: R$%.2f\n\n", 
                CadCor[i].agencia, CadCor[i].n_conta, CadCor[i].nome, 
                CadCor[i].cpf,CadCor[i].lim_cont, CadCor[i].saldo);
                encontrada=1;
                break;
        }
    }
    if(!encontrada){
        printf("conta nao encontrada.\n\n");
    }


}


void consultar_cliente(){
     char cpf[15];
    int i=0;

    printf("Digite o CPF do cliente (Ex: 075.685.521-79, seja fiel aos pontos e hífen): ");
    fflush(stdin);
    scanf("%[^\n]", cpf);
    printf("\n");
    system("cls");

    consultar_arquivo();
    

    int encontrado=0;
 for(i=0;i<250;i++){
    if(strcmp(cpf, CadPoup[i].cpf)==0){
        printf("\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de nascimento: %d/%d/%d\n\tTelefone: %s\n\tLocal: %s\n\tEndereco: %s\n\tNumero da casa: %s\n\tCEP: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\n",CadPoup[i].nome,CadPoup[i].cpf,CadPoup[i].nasc.dia,CadPoup[i].nasc.mes,CadPoup[i].nasc.ano,CadPoup[i].telefone,CadPoup[i].local,CadPoup[i].endereco,CadPoup[i].n_casa,CadPoup[i].cep,CadPoup[i].bairro,CadPoup[i].cidade,CadPoup[i].estado);
            encontrado=1;
            break;            
     }
    }
        for(i=0;i<250;i++){
        if (strcmp(cpf, CadCor[i].cpf)==0){
        printf("\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de nascimento: %d/%d/%d\n\tTelefone: %s\n\tLocal: %s\n\tEndereco: %s\n\tNumero da casa: %s\n\tCEP: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\n",CadCor[i].nome,CadCor[i].cpf,CadCor[i].nasc.dia,CadCor[i].nasc.mes,CadCor[i].nasc.ano,CadCor[i].telefone,CadCor[i].local,CadCor[i].endereco,CadCor[i].n_casa,CadCor[i].cep,CadCor[i].bairro,CadCor[i].cidade,CadCor[i].estado);
        encontrado=1;
     }
   } if(!encontrado){
    printf("Conta nao encontrada.");
   }
}
void case_cadastro_funcionario(){
    int x=0;
    int i=0;
    ler_indice_func(&i);
    system("cls");

    printf("\t\tCADASTRO FUNCIONARIO\n\n\t1-Codigo funcionario\n\t2-Cargo\n\t3-Nome\n\t4-CPF\n\t5-Data de nascimento\n\t6-Telefone de contato\n\t7-Endereco\n\t8-CEP\n\t9-Local\n\t10-Numero da casa\n\t11-Bairro\n\t12-Cidade\n\t13-Estado\n\t14-Senha do funcionario\n\t0-Concluir\n\n\tDigite a opcao desejada: ");
    scanf("%d",&x);

    if(x>14){
        printf("Opcao invalida...");
        Sleep(1000);
        system("cls");
        case_cadastro_funcionario();
    }
    switch (x)
    {
    case 1:{
        rec_cod(i);
        case_cadastro_funcionario();
        break;
    }   
    case 2:{
        rec_cargo(i);
        case_cadastro_funcionario();
        break;
    }
    case 3:{
        rec_nome(i);
        case_cadastro_funcionario();
        break;
    }
    case 4:{
        rec_cpf(i);
        case_cadastro_funcionario();
        break;
        }
    case 5:{
        rec_data(i);
        case_cadastro_funcionario();
        break;
    }
    case 6:{
        rec_tel(i);
        case_cadastro_funcionario();
        break;
    }
    case 7:{
        rec_end(i);
        case_cadastro_funcionario();
        break;
    }
    case 8:{
        rec_cep(i);
        case_cadastro_funcionario();
    }
        break;
    case 9:{
        rec_loc(i);
        case_cadastro_funcionario();
        break;
    }
    case 10:{
        rec_ncasa(i);
        case_cadastro_funcionario();
        break;
    }
    case 11:{
        rec_bairro(i);
        case_cadastro_funcionario();
        break;
    }
    case 12:{
        rec_cid(i);
        case_cadastro_funcionario();
        break;}
    case 13:{
        rec_est(i);
        case_cadastro_funcionario();
        break;
    }
    case 14:{
        rec_senha_func(i);
        case_cadastro_funcionario();
        break;
    }
    case 0:{
        gravar_dados_func(i);
        i++;
        sal_indice_func(i);
        break;
    }
  }
}

void rec_cod(int i){
    system("cls");
    printf("\t\tCodigo do funcionario\n\n\tDigite o codigo do funcionario: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].cod_func);
    printf("\n");
}
void rec_cargo(int i){
    system("cls");
    printf("\t\tCargo do funcionario\n\n\tDigite o cargo: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].cargo);
    printf("\n");
}
void rec_nome(int i){
    system("cls");
    printf("\t\tNome do funcionario\n\n\tDigite o nome: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].nome);
    printf("\n");
}
void rec_cpf(int i){
    system("cls");
    printf("\t\tCPF do funcionario\n\n\tDigite o CPF: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].cpf);
    printf("\n");
}
void rec_data(int i){
    system("cls");
    printf("\t\tData de nascimento do funcionario\n\n\tDigite a data: ");
    fflush(stdin);
    scanf("%d %d %d", &CadFunc[i].nasc.dia, &CadFunc[i].nasc.mes,&CadFunc[i].nasc.ano);
    printf("\n");
}
void rec_tel(int i){
    system("cls");
    printf("\t\tTelefone do funcionario\n\n\tDigite o telefone: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].tel);
    printf("\n");
}
void rec_end(int i){
    system("cls");
    printf("\t\tEndereco do funcionario\n\n\tDigite o endereco: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].endereco);
    printf("\n");
}
void rec_cep(int i){
    system("cls");
    printf("\t\tCEP do funcionario\n\n\tDigite o CEP: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].cep);
    printf("\n");
}
void rec_loc(int i){
    system("cls");
    printf("\t\tLocal do endereco\n\n\tDigite o local: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].local);
    printf("\n");
}
void rec_ncasa(int i){
    system("cls");
    printf("\t\tNumero da casa\n\n\tDigite o numero da casa: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].n_casa);
    printf("\n");
}
void rec_bairro(int i){
    system("cls");
    printf("\t\tBairro\n\n\tDigite o bairro: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].bairro);
    printf("\n");
}
void rec_cid(int i){
    system("cls");
    printf("\t\tCidade\n\n\tDigite a cidade: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].cidade);
    printf("\n");
}
void rec_est(int i){
    system("cls");
    printf("\t\tEstado\n\n\tDigite o estado: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].estado);
    printf("\n");
}
void rec_senha_func(int i){
    system("cls");
    printf("\t\tSenha do funcionario\n\n\tDigite a senha: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i].senha_func);
    printf("\n");
}
void sal_indice_func(int i){
    FILE *arq=fopen("indicefunc.txt","w");

    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);    
    }
    fprintf(arq,"%d",i);

    fclose(arq);
}
void ler_indice_func(int *i){

    FILE *arq=fopen("indicefunc.txt","r");

    if(arq!=NULL){
        fscanf(arq,"%d",i);
        fclose(arq);
    }else{
        *i=0;
    }

}

void gravar_dados_func(int i){
    system("cls");
    FILE *arq = fopen("funcionarios.txt","a");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo...");
        Sleep(1500);
        exit(1);
    }
    fprintf(arq,"Codigo do funcionario: %s\nCargo: %s\nNome: %s\nCPF: %s\nData de nascimento: %d/%d/%d\nTelefone: %s\nEndereco: %s\nCEP: %s\nLocal: %s\nNumero da casa: %s\nBairro: %s\nCidade: %s\nEstado: %s\nSenha do funcionario: %s\n\n",CadFunc[i].cod_func,CadFunc[i].cargo,CadFunc[i].nome,CadFunc[i].cpf,CadFunc[i].nasc.dia,CadFunc[i].nasc.mes,CadFunc[i].nasc.ano,CadFunc[i].tel,CadFunc[i].endereco,CadFunc[i].cep,CadFunc[i].local,CadFunc[i].n_casa,CadFunc[i].bairro,CadFunc[i].cidade,CadFunc[i].estado,CadFunc[i].senha_func);
    fclose(arq);

    system("cls");

}

void ler_func(){
    int i=0;
    FILE *arq = fopen("funcionarios.txt","r");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        Sleep(1500);
        exit(1);
    }

    while(fscanf(arq,"Codigo do funcionario: %[^\n]\nCargo: %[^\n]\nNome: %[^\n]\nCPF: %[^\n]\nData de nascimento: %d/%d/%d\nTelefone: %[^\n]\nEndereco: %[^\n]\nCEP: %[^\n]\nLocal: %[^\n]\nNumero da casa: %[^\n]\nBairro: %[^\n]\nCidade: %[^\n]\nEstado: %[^\n]\nSenha do funcionario: %[^\n]\n\n",CadFunc[i].cod_func,CadFunc[i].cargo,CadFunc[i].nome,CadFunc[i].cpf,&CadFunc[i].nasc.dia,&CadFunc[i].nasc.mes,&CadFunc[i].nasc.ano,CadFunc[i].tel,CadFunc[i].endereco,CadFunc[i].cep,CadFunc[i].local,CadFunc[i].n_casa,CadFunc[i].bairro,CadFunc[i].cidade,CadFunc[i].estado,CadFunc[i].senha_func)==16){
        i++;
    }
    fclose(arq);
}

void consulta_func(){
    
    int i=0;
    system("cls");
    ler_func();
    char codigo_func[20];
    printf("Digite o codigo do funcionario que deseja consultar: ");
    fflush(stdin);
    scanf("%[^\n]",codigo_func);
    printf("\n");

    int funcionario_encontrado=0;
    for(i=0;i<250;i++){
        if(strcmp(codigo_func, CadFunc[i].cod_func)==0){
            printf("\tCodigo do funcionario: %s\n\tCargo: %s\n\tNome: %s\n\tCPF: %s\n\tData de nascimento: %d/%d/%d\n\tTelefone: %s\n\tEndereco: %s\n\tCEP: %s\n\tLocal: %s\n\tNumero da casa: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\t",CadFunc[i].cod_func,CadFunc[i].cargo,CadFunc[i].nome,CadFunc[i].cpf,CadFunc[i].nasc.dia,CadFunc[i].nasc.mes,CadFunc[i].nasc.ano,CadFunc[i].tel,CadFunc[i].endereco,CadFunc[i].cep,CadFunc[i].local,CadFunc[i].n_casa,CadFunc[i].bairro,CadFunc[i].cidade,CadFunc[i].estado);
            funcionario_encontrado=1;
            break;
        }
    }if(!funcionario_encontrado){
        printf("funcionario não encontrad.");
    }
}




/*void gravar_senha_adm(char SENHA_ADMIN[]){
    
    system("cls");

    printf("Digite a senha de administrador: ");
    scanf("%s", SENHA_ADMIN);

    FILE *arq=fopen("senhas.txt","w");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    fprintf(arq,"Senha de Administrador:%s",SENHA_ADMIN);
    fclose(arq);
}*/
void ler_senha_adm(char SENHA_ADMIN[]){
    system("cls");

    FILE *arq=fopen("senhas.txt","r");
    if(arq!=NULL){
        fscanf(arq,"Senha de Administrador:%[^\n]",SENHA_ADMIN);
        fclose(arq);
    } 
     char senhaadm[20];

    printf("\tDigite a senha de administrador: ");
    scanf("%s", senhaadm);
    
    if(strcmp(senhaadm, SENHA_ADMIN)==0){
        printf("\n\n\tSenha correta.");
        Sleep(2000);
        system("cls");

    }else{
        printf("\tSenha incorreta.\n\n\tAguarde enquanto te redirecionamos para o menu funcionario.");
        Sleep(2000);
        menu_principal();
    }
    }
    
    void login_funcionario(){
        system("cls");
        ler_func();
        int i,alternativo;
        char cod_funci[10], senha[20];

        printf("\t\tLogin:\n\n\tDigite o codigo do funcionario: ");
        fflush(stdin);
        scanf("%[^\n]",cod_funci);
        printf("\n");
        

        for(i=0;i<250;i++){
            if(strcmp(cod_funci, CadFunc[i].cod_func)==0){
                printf("\n\tFuncionario encontrado.");
                Sleep(2500);
                system("cls");
                printf("\t\tSenha:\n\n\tDigite a senha do funcionario: ");
                fflush(stdin);
                scanf("%[^\n]",senha);
                printf("\n");
                
                if(strcmp(senha, CadFunc[i].senha_func)==0){
                    printf("\n\tSenha correta.");
                    Sleep(2500);
                    system("cls");
                    menu_funcionario();
                    return;
                    break;
                }else{
                    printf("\n\tSenha incorreta: ");
                    Sleep(2500);
                    system("cls");
                    login_funcionario();
                    break;
                }
            }else{
                printf("\tFuncionario nao encontrado.");
                Sleep(2500);
                system("cls");
                printf("\tVoce deseja logar com a senha de adm?\n\n\t1-Sim\n\t2-Nao\n\n\tDigite a opcao desejada: ");
                scanf("%d",&alternativo);

                switch (alternativo)
                {
                case 1:
                    system("cls");
                    ler_senha_adm(SENHA_ADMIN);
                    menu_funcionario();
                    break;
                
                case 2:
                    Sleep(2000);
                    menu_principal();
                    break;
                }}
            }}

    void alterar_dados(){
    int i=0;
    system("cls");  
    ler_senha_adm(SENHA_ADMIN);
    consultar_arquivo();  
    char numero_conta[10];
    

    printf("Digite a conta que deseja alterar: ");
    fflush(stdin);
    scanf("%[^\n]", numero_conta);
    printf("\n");
    int conta_encontrada=0;
    for(i=0;i<250;i++){
        if(strcmp(numero_conta, CadPoup[i].n_conta) == 0 && CadPoup[i].agencia != 0){
            alterar_poupanca(i);
            conta_encontrada=1;
            break;          
        }
          
}    
    if(conta_encontrada==0){
        for(i=0;i<250;i++){
            if(strcmp(numero_conta, CadCor[i].n_conta) == 0 && CadCor[i].agencia != 0){
            alterar_corrente(i);
            conta_encontrada=1;
            break;        
            }
        }
    }if(conta_encontrada==0){
        printf("Conta nao encontrada\n");
    }
    system("pause");
    menu_funcionario();

    }

    void alterar_poupanca(int i){
        int x=0;
        system("cls");

        do{
        printf("\tEscolha a informacao que deseja alterar:\n\n\t1-Agencia\n\t2-Numero da conta\n\t3-Nome do cliente\n\t4-CPF do cliente\n\t5-Data de nascimento\n\t6-Telefone de contato\n\t7-Endereco do cliente\n\t8-CEP\n\t9-Local\n\t10-Numero da casa\n\t11-Bairro\n\t12-Cidade\n\t13-Estado\n\t14-Senha do cliente\n\t15-Saldo do cliente\n\t0-Concluir\n\n\tDigite a opcao desejada: ");
        scanf("%d",&x);
        system("cls");

        switch (x)
        {
        case 1:
                printf("Digite a nova agencia: ");
                scanf("%d", &CadPoup[i].agencia);
                printf("\n");
                break;
            case 2:
                printf("Digite o novo numero da conta: ");
                fflush(stdin);
                scanf("%19s", CadPoup[i].n_conta);
                printf("\n");
                break;
            case 3:
                printf("Digite o novo nome do cliente: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].nome);
                printf("\n");
                break;
            case 4:
                printf("Digite o novo CPF do cliente: ");
                fflush(stdin);
                scanf("%14s", CadPoup[i].cpf);
                printf("\n");
                break;
            case 5:
                printf("Digite a nova data de nascimento (dia mes ano): ");
                scanf("%d %d %d", &CadPoup[i].nasc.dia, &CadPoup[i].nasc.mes, &CadPoup[i].nasc.ano);
                printf("\n");
                break;
            case 6:
                printf("Digite o novo telefone de contato: ");
                fflush(stdin);
                scanf("%[^\n]", CadPoup[i].telefone);
                printf("\n");
                break;
            case 7:
                printf("Digite o novo endereco do cliente: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].endereco);
                printf("\n");
                break;
            case 8:
                printf("Digite o novo CEP: ");
                fflush(stdin);
                scanf("%9s", CadPoup[i].cep);
                printf("\n");
                break;
            case 9:
                printf("Digite o novo local: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].local);
                printf("\n");
                break;
            case 10:
                printf("Digite o novo numero da casa: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].n_casa);
                printf("\n");
                break;
            case 11:
                printf("Digite o novo bairro: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].bairro);
                printf("\n");
                break;
            case 12:
                printf("Digite a nova cidade: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].cidade);
                printf("\n");
                break;
            case 13:
                printf("Digite o novo estado: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].estado);
                printf("\n");
                break;
            case 14:
                printf("Digite a nova senha do cliente: ");
                fflush(stdin);
                scanf(" %[^\n]", CadPoup[i].senha_cliente);
                printf("\n");
                break;
            case 15:
                printf("Digite o novo saldo do cliente: ");
                scanf("%f", &CadPoup[i].saldo);
                printf("\n");
                break;
        
        case 0:
                salvar_dados_poup();
                printf("\tDados alterados com sucesso");
                Sleep(2500);
                system("cls");
            break;
        
        default:
            printf("Opcao invalida.");
            break;
        }
        
    }while(x!=0);
}
   void alterar_corrente(int i){
        int x=0;
        system("cls");

    do{
        printf("\tCONTA CORRENTE\n\n\t1-Agencia\n\t2-Numero da conta\n\t3-Limite da conta\n\t4-Data de vencimento\n\t5-Nome do cliente\n\t6-CPF do cliente\n\t7-Data de nascimento\n\t8-Telefone de contato\n\t9-Endereco do cliente\n\t10-CEP\n\t11-Local\n\t12-Numero da casa\n\t13-Bairro\n\t14-Cidade\n\t15-Estado\n\t16-Senha do cliente\n\t17-Saldo\n\t0-Concluir\n\n\tDigite a opcao desejada: (digite todas as informacoes) ");
        scanf("%d",&x);
        system("cls");
        switch (x)
        
        {
        case 1:
                printf("Digite a nova agencia: ");
                scanf("%d", &CadCor[i].agencia);
                printf("\n");
                break;
            case 2:
                printf("Digite o novo numero da conta: ");
                fflush(stdin);
                scanf("%[^\n]", CadCor[i].n_conta);
                printf("\n");
                break;
            case 3:
                printf("Digite o novo limite da conta: ");
                scanf("%f",&CadCor[i].lim_cont);
                printf("\n");
                limite_total(i);
                break;
            case 4:
                printf("Digite a nova data de vencimento: (dia mes ano) ");
                scanf("%d %d %d",&CadCor[i].venc.dia,&CadCor[i].venc.mes,&CadCor[i].venc.ano);
                printf("\n");
                break;
            case 5:
                printf("Digite o novo nome do cliente: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].nome);
                printf("\n");
                break;

            case 6:
                printf("Digite o novo CPF do cliente: ");
                fflush(stdin);
                scanf("%[^\n]", CadCor[i].cpf);
                printf("\n");
                break;
            case 7:
                printf("Digite a nova data de nascimento (dia mes ano): ");
                scanf("%d %d %d", &CadCor[i].nasc.dia, &CadCor[i].nasc.mes, &CadCor[i].nasc.ano);
                printf("\n");
                break;
            case 8:
                printf("Digite o novo telefone de contato: ");
                fflush(stdin);
                scanf("%[^\n]", CadCor[i].telefone);
                printf("\n");
                break;
            case 9:
                printf("Digite o novo endereco do cliente: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].endereco);
                printf("\n");
                break;
            case 10:
                printf("Digite o novo CEP: ");
                fflush(stdin);
                scanf("%[^\n]", CadCor[i].cep);
                printf("\n");
                break;
            case 11:
                printf("Digite o novo local: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].local);
                printf("\n");
                break;
            case 12:
                printf("Digite o novo numero da casa: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].n_casa);
                printf("\n");
                break;
            case 13:
                printf("Digite o novo bairro: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].bairro);
                printf("\n");
                break;
            case 14:
                printf("Digite a nova cidade: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].cidade);
                printf("\n");
                break;
            case 15:
                printf("Digite o novo estado: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].estado);
                printf("\n");
                break;
            case 16:
                printf("Digite a nova senha do cliente: ");
                fflush(stdin);
                scanf(" %[^\n]", CadCor[i].senha_cliente);
                printf("\n");
                break;
            case 17:
                printf("Digite o novo saldo do cliente: ");
                scanf("%f", &CadCor[i].saldo);
                printf("\n");
                break;
        
        case 0:
                salvar_dados_cor();
                printf("\tDados alterados com sucesso");
                Sleep(2500);
                system("cls");
            break;
        
        default:
            printf("Opcao invalida.");
            break;
        }
        
    }while(x!=0);
}
    void limite_total(int i){

        CadCor[i].lim_indis=0;
        CadCor[i].lim_disp = CadCor[i].lim_cont - CadCor[i].lim_indis;
    } 
    void salvar_dados_poup() {
    int i;
    FILE *arq = fopen("poupancas.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    for (i = 0; i <250;i++) {
        if (CadPoup[i].agencia != 0) {
            fprintf(arq, "Agencia: %d\nNumero da conta: %s\nNome do cliente: %s\nCPF do cliente: %s\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %s\nEndereco do cliente: %s\nCEP do cliente: %s\nLocal: %s\nNumero da casa: %s\nBairro: %s\nCidade: %s\nEstado: %s\nSenha do cliente: %s\nSaldo: %.2f\n\n",
                    CadPoup[i].agencia, CadPoup[i].n_conta, CadPoup[i].nome, CadPoup[i].cpf, CadPoup[i].nasc.dia, CadPoup[i].nasc.mes, CadPoup[i].nasc.ano,
                    CadPoup[i].telefone, CadPoup[i].endereco, CadPoup[i].cep, CadPoup[i].local, CadPoup[i].n_casa, CadPoup[i].bairro, CadPoup[i].cidade,
                    CadPoup[i].estado, CadPoup[i].senha_cliente, CadPoup[i].saldo);
        }
    }

    fclose(arq);
}
void salvar_dados_cor() {
    FILE *arq = fopen("correntes.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    int i;
    for (i = 0; i < 250; i++) {
        if (CadCor[i].agencia != 0) {
            fprintf(arq, "Agencia: %d\nNumero da conta: %s\nLimite da conta: %.2f\nData de vencimento: %d/%d/%d\nNome do cliente: %s\nCPF do cliente: %s\nData de Nascimento: %d/%d/%d\nTelefone do cliente: %s\nEndereco do cliente: %s\nCEP do cliente: %s\nLocal: %s\nNumero da casa: %s\nBairro: %s\nCidade: %s\nEstado: %s\nSenha do cliente: %s\nSaldo: %f\nLimite disponivel: %f\nLimite indisponivel: %f\n\n",CadCor[i].agencia, CadCor[i].n_conta, CadCor[i].lim_cont, CadCor[i].venc.dia, CadCor[i].venc.mes, CadCor[i].venc.ano,
                    CadCor[i].nome, CadCor[i].cpf, CadCor[i].nasc.dia, CadCor[i].nasc.mes, CadCor[i].nasc.ano,
                    CadCor[i].telefone, CadCor[i].endereco, CadCor[i].cep, CadCor[i].local, CadCor[i].n_casa,
                    CadCor[i].bairro, CadCor[i].cidade, CadCor[i].estado, CadCor[i].senha_cliente, CadCor[i].saldo,CadCor[i].lim_disp,CadCor[i].lim_indis);
        }
    }

    fclose(arq);
}

void consulta_saldo(int i, int tipo_conta){
    char senha[15];
    consultar_arquivo();
    
    printf("\tDigite a senha: ");
    fflush(stdin);
    scanf("%[^\n]", senha);
    printf("\n");
   	system("cls");
    
    if (tipo_conta == 1){
        if (strcmp(senha,CadPoup[i].senha_cliente)==0){
        printf("\tSenha correta, exibindo saldo...");
        Sleep(2500);
        system("cls");
        printf("\tSaldo diponivel: %.2f\n", CadPoup[i].saldo);
        system("pause");
        menu_cliente(i, tipo_conta);
        }
        else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    }
    else if (tipo_conta == 2){
        if (strcmp(senha,CadCor[i].senha_cliente)==0){
        printf("\tSenha correta, exibindo saldo...\n");
        Sleep(2500);
        system("cls");
        printf("\tSaldo diponivel: %.2f\n", CadCor[i].saldo);
        system("pause");
        menu_cliente(i, tipo_conta);
        }
        else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    }
}

void deposito_cliente(int i, int tipo_conta) {
    float v_dep = 0, saldo_antigo = 0;
    char senha[15];
    int k = 0;

    consultar_arquivo();

    printf("\tDigite a senha: ");
    fflush(stdin);
    scanf("%[^\n]", senha);
    printf("\n");
    system("cls");

    if (tipo_conta == 1) {
        if (strcmp(senha, CadPoup[i].senha_cliente) == 0) {
            printf("\tSenha correta, prosseguindo para o deposito...");
            Sleep(2500);
            system("cls");
            do {
                printf("\tDigite o valor do deposito, em reais: R$");
                scanf("%f", &v_dep);
                printf("\n\n\tO valor a ser depositado eh: R$%.2f. Digite \"1\" para continuar ou \"2\" para digitar outro valor.", v_dep);
                scanf("%d", &k);
            } while (k != 1);
            printf("\n\n\tDepositando...");
            Sleep(2500);
            saldo_antigo = CadPoup[i].saldo;
            CadPoup[i].saldo += v_dep;
            FILE *arq = fopen("poupancas.txt", "w");
            if (arq == NULL) {
                printf("\tErro ao abrir o arquivo.");
                exit(1);
            }
            fclose(arq);
            if (CadPoup[i].saldo != saldo_antigo) {
                salvar_dados_poup();
                extrato_bancario(i, tipo_conta, v_dep, "Deposito");
                printf("\n\tSaldo atualizado com sucesso!!\n\n");
            } else {
                printf("\n\tO saldo nao foi atualizado, aperte qualquer tecla para voltar ao menu deposito.\n\n");
            }
            system("pause");
            system("cls");
            menu_cliente(i, tipo_conta);
        } else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    } else if (tipo_conta == 2) {
        if (strcmp(senha, CadCor[i].senha_cliente) == 0) {
            printf("\tSenha correta, prosseguindo para o deposito...");
            Sleep(2500);
            system("cls");
            do {
                printf("\tDigite o valor do deposito, em reais: R$");
                scanf("%f", &v_dep);
                printf("\n\n\tO valor a ser depositado eh: R$%.2f. Digite \"1\" para continuar ou \"2\" para digitar outro valor.", v_dep);
                scanf("%d", &k);
            } while (k != 1);
            printf("\n\n\tDepositando...");
            Sleep(2500);
            saldo_antigo = CadCor[i].saldo;
            if (CadCor[i].lim_indis > 0) {
                float restante = v_dep - CadCor[i].lim_indis;
                CadCor[i].lim_disp += v_dep - restante;
                CadCor[i].lim_indis -= v_dep - restante;
                CadCor[i].saldo = restante;
                salvar_dados_cor();
                extrato_bancario(i, tipo_conta, v_dep, "Deposito");
                printf("\n\nDeposito realizado com sucesso.");
                Sleep(1500);
                menu_cliente(i, tipo_conta);
            } else {
                CadCor[i].saldo += v_dep;
                if (CadCor[i].saldo != saldo_antigo || v_dep > 0) {
                    salvar_dados_cor();
                    extrato_bancario(i, tipo_conta, v_dep, "Deposito");
                    printf("\n\tDeposito realizado com sucesso!!\n\n");
                } else {
                    printf("\n\tO saldo nao foi atualizado, aperte qualquer tecla para voltar ao menu deposito.");
                }
                system("pause");
                system("cls");
                menu_cliente(i, tipo_conta);
            }
        } else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    }
}

void saque_cliente(int i, int tipo_conta) {
    char senha[15];
    float saque = 0;
    consultar_arquivo();

    printf("\tDigite a senha: ");
    fflush(stdin);
    scanf("%[^\n]", senha);
    printf("\n");
    system("cls");

    if (tipo_conta == 1) {
        if (strcmp(senha, CadPoup[i].senha_cliente) == 0) {
            printf("\tSenha correta...");
            Sleep(2500);
            system("cls");

            printf("\tInforme o valor do saque: ");
            scanf("%f", &saque);
            system("cls");

            if (saque >= 0 && saque <= CadPoup[i].saldo) {
                CadPoup[i].saldo -= saque;
                printf("\tSaque realizado com sucesso.\n\n");
                salvar_dados_poup();
                extrato_bancario(i, tipo_conta, saque, "Saque");
            } else {
                printf("\tSaldo insuficiente. Redirecionando ao menu do cliente...");
                Sleep(2500);
            }

            system("pause");
            menu_cliente(i, tipo_conta);
        } else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    } else if (tipo_conta == 2) {
        if (strcmp(senha, CadCor[i].senha_cliente) == 0) {
            printf("\tSenha correta...");
            Sleep(2500);
            system("cls");

            printf("\tInforme o valor do saque: ");
            scanf("%f", &saque);
            system("cls");

            if (saque >= 0) {
                float saldo_disponivel = CadCor[i].saldo + CadCor[i].lim_disp;

                if (saque <= saldo_disponivel) {
                    if (saque <= CadCor[i].saldo) {
                        CadCor[i].saldo -= saque;
                    } else {
                        float falta_sacar = saque - CadCor[i].saldo;
                        CadCor[i].saldo = 0;
                        CadCor[i].lim_disp -= falta_sacar;
                        CadCor[i].lim_indis += falta_sacar;
                    }

                    printf("\tSaque realizado com sucesso.\n\n");
                    salvar_dados_cor();
                    extrato_bancario(i, tipo_conta, saque, "Saque");
                    menu_cliente(i, tipo_conta);
                } else {
                    printf("\tSaque maior que o saldo disponível e limite. Redirecionando ao menu do cliente...");
                }
            } else {
                printf("\tValor de saque inválido. Redirecionando ao menu do cliente...");
            }

            Sleep(2500);
            system("pause");
            menu_cliente(i, tipo_conta);
        } else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    }
}

    void consultar_limite(int i, int tipo_conta){
        system("cls");
        consultar_arquivo();
        char senha[20];
        printf("Digite a senha: ");
        fflush(stdin);
        scanf("%[^\n]",senha);
        printf("\n");
        system("cls");

        if(tipo_conta==1){
            printf("Conta poupanca nao possui limite.\n");
        }else if(tipo_conta==2){
            if(strcmp(senha, CadCor[i].senha_cliente)==0){
            printf("\tSenha correta...");
            Sleep(2500);
            system("cls");

            printf("\t\tLimite da conta: %.2f\n\n\tLimite disponivel: %.2f\tLimite indisponivel: %.2f\n\n",CadCor[i].lim_cont,CadCor[i].lim_disp,CadCor[i].lim_indis);
            system("pause");
            menu_cliente(i, tipo_conta);
            }else{
            printf("Senha incorreta.");
            Sleep(1500);
            menu_cliente(i, tipo_conta);
            }
        }
    }
   void extrato_bancario(int i, int tipo_conta, float valor, const char* operacao) {
    consultar_arquivo();
    char senha[20];
    FILE *arq = fopen("extrato.txt", "a");
    FILE *arq1 = fopen("relatorio.csv","a");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    printf("Digite a senha: ");
    fflush(stdin);
    scanf("%[^\n]", senha);
    if (tipo_conta == 1) {        
        if (strcmp(senha, CadPoup[i].senha_cliente) == 0) {
            fprintf(arq, "%s %s %f %f\n",CadPoup[i].n_conta, operacao, valor, CadPoup[i].saldo);
            fprintf(arq1, "%s;%s;%.2f;%.2f\n",CadPoup[i].n_conta, operacao, valor, CadPoup[i].saldo);
        } else {
            printf("Senha incorreta.\n");
        }
    } else if (tipo_conta == 2) {
        if (strcmp(senha, CadCor[i].senha_cliente) == 0) {
            fprintf(arq, "%s %s %f %f\n",CadCor[i].n_conta, operacao, valor, CadCor[i].saldo);
            fprintf(arq1, "%s;%s;%.2f;%.2f\n",CadCor[i].n_conta, operacao, valor, CadCor[i].saldo);
        } else {
            printf("Senha incorreta.\n");
        }
    }
    
    fclose(arq);
    fclose(arq1);
}
void consultar_extrato(int i, int tipo_conta) {
    char senha[30];
    FILE *arq;
    consultar_arquivo();

    printf("\tDigite a senha: ");
    fflush(stdin);
    scanf("%[^\n]", senha);
    printf("\n");
    system("cls");

    if (tipo_conta == 1) {
        if (strcmp(senha, CadPoup[i].senha_cliente) == 0) {
            printf("\tSenha correta, carregando extrato...");
            Sleep(2500);
            system("cls");

            arq = fopen("extrato.txt", "r");
            FILE *arq1 = fopen("extrato.csv", "w");
            if (arq == NULL) {
                printf("Erro ao abrir arquivo de extrato.\n");
                exit(1);
            }

            float valor;
            char operacao[20];
            char conta[10];
            int x=0;

            
            printf("\tEXTRATO BANCARIO\n");
            printf("\t___________________________________________________________\n");
            while (fscanf(arq, "%s %s %f %f\n", conta, operacao, &valor, &CadPoup[i].saldo) == 4) {
                
                if(strcmp(CadPoup[i].n_conta, conta) != 0) continue;
                if (strcmp(operacao, "Saque") == 0) {
                    printf("\t%s:\t\t\t%.2f\n\n\t\t\tSaldo Atual: %f\n", operacao, valor, CadPoup[i].saldo);
                } else {
                    printf("\t%s:\t\t%.2f\n\n\t\t\tSaldo Atual: %f\n", operacao, valor, CadPoup[i].saldo);
                if(x==0){
                    fprintf(arq1,"Conta;Operacao;Valor;Saldo apos operacao\n");
                    x++;
                }
}               fprintf(arq1, "%s;%s;%.2f;%.2f\n",CadPoup[i].n_conta, operacao, valor, CadPoup[i].saldo);                
            }system("start excel extrato.csv");
            printf("\t___________________________________________________________\n");

            fclose(arq);
            fclose(arq1);

            printf("\n");
            system("pause");
            system("cls");
            menu_cliente(i, tipo_conta);
        } else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    } else if (tipo_conta == 2) {
        if (strcmp(senha, CadCor[i].senha_cliente) == 0) {
            printf("\tSenha correta, carregando extrato...");
            Sleep(2500);
            system("cls");

            arq = fopen("extrato.txt", "r");
            FILE *arq1 = fopen("extrato.csv", "w");
            if (arq == NULL) {
                printf("Erro ao abrir arquivo de extrato.\n");
                exit(1);
            }

            float valor;
            char operacao[20];
            char conta[20];
            int x=0;
            printf("\tEXTRATO BANCARIO\n");
            printf("\t___________________________________________________________\n");
            while (fscanf(arq, "%s %s %f %f\n",conta, operacao, &valor, &CadCor[i].saldo) == 4) {
                if(strcmp(CadCor[i].n_conta, conta) != 0) continue;
                if (strcmp(operacao, "Saque") == 0) {
                    printf("\t%s:\t\t\t%.2f\n\n\t\t\tSaldo Atual: %f\n", operacao, valor, CadCor[i].saldo);
                } else {
                    printf("\t%s:\t\t%.2f\n\n\t\t\tSaldo Atual: %f\n", operacao, valor, CadCor[i].saldo);
                }if(x==0){
                    fprintf(arq1,"Conta;Operacao;Valor;Saldo apos operacao\n");
                    x++;
                }
                fprintf(arq1, "%s;%s;%.2f;%.2f\n",CadCor[i].n_conta, operacao, valor, CadCor[i].saldo);
                }system("start excel extrato.csv");
            printf("\t___________________________________________________________\n");

            fclose(arq);
            fclose(arq1);

            printf("\n");
            system("pause");
            system("cls");
            menu_cliente(i, tipo_conta);
        } else {
            printf("\tSenha incorreta, redirecionando para o menu cliente...");
            Sleep(2500);
            menu_cliente(i, tipo_conta);
        }
    }
}

