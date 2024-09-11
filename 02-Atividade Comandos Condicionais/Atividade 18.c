#include <stdio.h>

/*
Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se forem, verificar se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um triângulo escrever uma mensagem. Considerar que:

- O comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
- Chama-se triângulo equilátero o triângulo que tem três lados iguais;
- Chama-se triângulo isósceles o triângulo que tem o comprimento de dois lados iguais;
- Chama-se triângulo escaleno o triângulo que tem os três lados diferentes.

*/

int main() {
    float X, Y, Z;

    
    printf("Digite os comprimentos dos lados do triangulo (X, Y, Z): ");
    scanf("%f %f %f", &X, &Y, &Z);

    
    if (X < Y + Z && Y < X + Z && Z < X + Y) {

        if (X == Y && Y == Z) 
            printf("Triangulo Equilatero\n");
         else if (X == Y || X == Z || Y == Z) 
            printf("Triangulo Isosceles\n");
         else 
            printf("Triangulo Escaleno\n");
        
    } else 
        printf("Os valores fornecidos nao formam um triangulo\n");
    

    return 0;
}
