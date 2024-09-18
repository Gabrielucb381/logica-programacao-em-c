#include "procedures.h"
void senha_menu_funcionario();
void senha_menu_cliente();
void sair_do_programa();

void menu_principal(){
	int x;
	system("cls");
	printf("\tMENU PRINCIPAL\n\n\t1-Funcionario\n\t2-Cliente\n\t3-Sair do programa\n\n\tDigite a opcao desejada: ");
	scanf("%d",&x);

	system("cls");
	if(x==0||x>3){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para o menu principal...");
        Sleep(2500);
        menu_principal();
        }
	switch (x)
	{
	case 1:
		login_funcionario();
		break;
	
	case 2:
        conta_senha_cliente();		
		break;

	case 3:
		sair_do_programa();
	}
	if(x!=1&&x!=2&&x!=3){
	printf("opcao incorreta: \n");
	Sleep(1000);
	system("pause");
	menu_principal();
	}
}

void sair_do_programa(){
    system("cls");
    system("pause");
	exit(0);
}void menu_funcionario(){    
    int x=0;
    system("cls");
        printf("\tMENU FUNCIONARIO\n\n\t1-Abertura de conta\n\t2-Encerramento de conta\n\t3-Consultar dados\n\t4-Alterar dados\n\t5-Cadastro de funcionarios\n\t6-Gerar relatorios\n\t0-Menu principal.\n\n\tDigite a opcao desejada: ");
        scanf("%d", &x);
   
    switch (x)
    {
    case 1:
        abertura_de_conta();
        break;
    
    case 2:
        encerramento_de_conta();
        break;
    case 3:
        consultar_dados();
        break;
    case 4:
        alterar_dados();
        break;
    case 5:
        cadastro_funcionario();
        break;
    case 6:
        system("start excel relatorio.csv");
        break;
    case 0:
        system("cls");
        menu_principal();
        break;
    default:
        printf("Opcao invalida.");
        
    }
}

void abertura_de_conta(){
    int x=0;
    system("cls");
    printf("\t1-ABERTURA DE CONTA\n\n\t1-Conta Poupanca-CP\n\t2-Conta Corrente-CC\n\t3-Voltar\n\n\tDigite a opcao desejada: ");
    scanf("%d",&x);
    system("cls");
    if(x==0||x>3){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para a abertura de conta novamente...");
        Sleep(2500);
        abertura_de_conta();
    }
    system("cls");
    switch (x)
    {
    case 1:
        conta_poupanca();
        break;
    
    case 2:
        conta_corrente();
        break;
    case 3:
        printf("Aguarde enquanto te redirecionamos para o menu do funcionario...");
        Sleep(2500);
        system("cls");
        menu_funcionario();
    }
}

void encerramento_de_conta() {
    encerrar_conta();
    Sleep(2000);
    menu_funcionario();  
    } 


void consultar_dados(){
    int x=0;
    system("cls");
    printf("\tCONSULTAR DADOS\n\n\t1-Consultar conta\n\t2-Consultar funcionario\n\t3-Consultar cliente\n\t4-Voltar\n\nDigite a opcao desejada: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        consultar_conta();
        system("pause");
        system("cls");
        consultar_dados();
        break;
    
    case 2:
        consulta_func();
        system("pause");
        system("cls");
        consultar_dados();      
        break;

    case 3:
        consultar_cliente();
        system("pause");
        system("cls");
        consultar_dados();        
        break;
    case 4:
        Sleep(2000);
        menu_funcionario(); 
 }
}

void cadastro_funcionario(){

    system("cls");
    ler_senha_adm(SENHA_ADMIN);

    case_cadastro_funcionario();
    printf("\nFuncionario cadastrado com sucesso.\n\n");
    system("pause");
    menu_principal();        
}
void conta_senha_cliente(){
	char nu_conta[30];
	int tipo_conta;
	char senha[30];
    int i = 0;
    consultar_arquivo();

    printf("Digite o numero da conta: ");
    fflush(stdin);
    scanf("%[^\n]", nu_conta);
    system("cls");

    int encontrada=0;    

    for (i = 0; i < 250; i++) {
        if (strcmp(nu_conta, CadPoup[i].n_conta) == 0) {
            printf("\n\tTipo de conta: Poupanca\n\n");
            printf("\tDigite a senha dessa conta: ");
            fflush(stdin);
    	    scanf("%[^\n]", senha);
   	    system("cls");

		if(strcmp(senha,CadPoup[i].senha_cliente)==0){
            		printf("Senha correta. Redirecionando ao menu cliente...");
            		Sleep(2500);
            		tipo_conta=1;
            		menu_cliente(i,tipo_conta);
			} 
		else {	
			printf("Senha errada. Redirecionando ao menu principal...");
			Sleep(2500);
			menu_principal();
		}
		encontrada=1;
                break;
        }
    }

    for (i = 0; i < 250; i++) {
	    if (strcmp(nu_conta, CadCor[i].n_conta) == 0) {
            	printf("\n\tTipo de conta: Corrente\n\n");
	        printf("\tDigite a senha dessa conta: ");
	        fflush(stdin);
    		scanf("%[^\n]", senha);
   		system("cls");

	    	if(strcmp(senha,CadCor[i].senha_cliente)==0){
            		printf("Senha correta. Redirecionando ao menu cliente...");
            		Sleep(2500);
            		tipo_conta=2;
            		menu_cliente(i,tipo_conta);
	    	} 
	    	else {
	    		printf("Senha errada. Redirecionando ao menu principal...");
			Sleep(2500);
			menu_principal();
	    	}
            	encontrada=1;
            	break;
            }
    }
    if(!encontrada){
        printf("Conta nao encontrada, redirecionando para o menu principal...");
	menu_principal();
    }

}


void menu_cliente(int i_conta, int tipo_conta){
        int x=0;
    
		system("cls");
        printf("\n\tMENU CLIENTE\n\n\t1-Saldo\n\t2-Deposito\n\t3-Saque\n\t4-Extrato\n\t5-Consultar limite\n\t6-Sair\n\n\tDigite a opcao desejada: ");
        scanf("%d", &x);
        if(x==0||x>6){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para o menu do cliente...");
        Sleep(2500);
        system("cls");
        menu_cliente(i_conta,tipo_conta);
        }
        system("cls");
    switch (x)
    {
    case 1:
    	consulta_saldo(i_conta,tipo_conta);

        break;
    
    case 2:
    	deposito_cliente(i_conta,tipo_conta);
        
        break;
    case 3:
        saque_cliente(i_conta,tipo_conta);
	    
        break;
    case 4:
    	consultar_extrato(i_conta,tipo_conta);

        break;
    case 5:
        consultar_limite(i_conta,tipo_conta);
        break;
    case 6:
        system("cls");
        menu_principal();
        break;
    }
}