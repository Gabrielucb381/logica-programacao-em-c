#include <stdio.h>
#include <locale.h>

/*Faça um programa que determine a data cronologicamente maior de duas datas
fornecidas pelo usuário. Cada data deve ser fornecida por três valores inteiros, onde o
primeiro representa o dia, o segundo o mês e o terceiro o ano.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia1,mes1,ano1,dia2,mes2,ano2;

    printf("Digite a primeira data: (dia mes e ano)");
    scanf("%d %d %d", &dia1,&mes1,&ano1);

    printf("Digite a segunda data: (dia mes ano)");
    scanf("%d %d %d", &dia2,&mes2,&ano2);

    if (ano1 > ano2) 
        printf("A data maior cronologicamente e a primeira: %d/%d/%d\n", dia1, mes1, ano1);
     else if (ano2 > ano1) 
        printf("A data maior cronologicamente e a segunda: %d/%d/%d\n", dia2, mes2, ano2);
     else 
        if (mes1 > mes2) 
            printf("A data maior cronologicamente e a primeira: %d/%d/%d\n", dia1, mes1, ano1);
         else if (mes2 > mes1) 
            printf("A data maior cronologicamente e a segunda: %d/%d/%d\n", dia2, mes2, ano2);
         else 
            if (dia1 > dia2) 
                printf("A data maior cronologicamente e a primeira: %d/%d/%d\n", dia1, mes1, ano1);
             else if (dia2 > dia1) 
                printf("A data maior cronologicamente e a segunda: %d/%d/%d\n", dia2, mes2, ano2);
          
        
    
    
    
    
    return 0;
}
