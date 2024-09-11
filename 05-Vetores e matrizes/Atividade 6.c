
/* Deseja-se publicar o numero de acertos de cada aluno em uma prova em forma de testes. A prova consta de 30 questoes, cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso sao dados:

o cartao gabarito;
o numero de alunos da turma;
o cartao de respostas para cada aluno, contendo o seu numero e suas respostas. */

#include <stdio.h>
#include <windows.h>

void VETOR_GAB(char gabarito[]){

    int i;
    system("cls");
    printf("Digite as respostas do gabarito (A,B,C,D,E).\n");
    for(i=0; i<30; i++){

        printf("%d.",i+1);
        scanf(" %c",&gabarito[i]);
    } system("cls");
}

void ALUNO(char resposta[],int num_alunos,int aluno[]){

    int i;


    for(i=0; i<num_alunos; i++){

        printf("\nDigite o numero do aluno que vai ter a nota calculada: ");
        for(i=0; i<num_alunos;i++){
            scanf("%d",&aluno[i]);
        }

        printf("Digite a resposta do aluno:");
        for(int j=0; j<30; j++){
            printf("\n");
            printf("%d.",j+1);
            scanf(" %c", &resposta[j]);

        }
    } 
}
void CHAM(char gabarito[], char resposta[], int aluno[],int num_alunos){
    
    int i,j;
    system("cls");

    printf("Digite o numero de alunos: ");
    scanf("%d",&num_alunos);

    VETOR_GAB(gabarito);
    ALUNO(resposta,num_alunos,aluno);
    printf("\nO gabarito eh: "); 
    for(i=0; i<30; i++){
        printf("\n%d. %c",i+1, gabarito[i]);
    }
    printf("A quantidade de alunos é: %d", num_alunos);
    for(i=0;i<num_alunos;i++){
            printf("\n\nAs respostas do aluno %d foram: ",aluno[i]);
            int cont=0;
        for(j=0; j<30; j++){
            printf("\n\n%d. %c",j+1,resposta[j]);
            if(resposta[j] == gabarito[j]){
                cont++;
            }
    }printf("\n\nA quantidade de acertos do aluno %d eh %d",aluno[i],cont);
    }
}

int main (){
    char gabarito[30];
    char resposta[30];
    int aluno[100];
    int num_alunos=0;

    system("cls");
    CHAM(gabarito,resposta,aluno,num_alunos);
}