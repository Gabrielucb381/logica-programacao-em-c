#include <stdio.h>
#include <time.h>
#include <locale.h>

/*Faça um programa que mostre a data e a hora do sistema nos seguintes formatos
dia/mês/ano – mês por extenso e hora: minuto.*/

int main() {

    setlocale(LC_ALL, "Portuguese");
    time_t t = time(NULL);
    const char *mes[12] = {"Janeiro","Fevereiro","Mar�o","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    struct tm tm = *localtime(&t);
    int ano = tm.tm_year + 1900;
    printf("Hoje é %02d de %s %04d às  %02d:%02d:%02d\n", tm.tm_mday, mes[tm.tm_mon], ano, tm.tm_hour, tm.tm_min, tm.tm_sec);
   

    return 0;
}