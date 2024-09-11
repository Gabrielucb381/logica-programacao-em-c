#include <stdio.h>
#include <math.h>

/*Faça um programa para resolver equações do 2º grau. ax² + bx + c = 0

- A variável a deve ser diferente de zero.
- Δ < 0 não existe raiz real.
- Δ = 0 a existe uma raiz real.
- x = -b/(2*a).
- Δ > 0 existem duas raizes reais.
- x1 = (-b + √Δ)/(2*a).
- x2 = (-b - √Δ)/(2*a).

*/

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raizes reais distintas:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        
        x1 = -b / (2 * a);
        printf("Existe uma raiz real:\n");
        printf("x = %.2f\n", x1);
    } else {
       
        printf("Nao existe raiz real.\n");
    }

    return 0;
}
