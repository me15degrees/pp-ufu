#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c, d; 
    double soma_real, soma_imaginaria;
    double subtracao_real, subtracao_imaginaria;
    double produto_real, produto_imaginaria;
    double modulo_z, modulo_w;

    printf("Digite a parte real de z: ");
    scanf("%lf", &a);
    printf("Digite a parte imaginaria de z: ");
    scanf("%lf", &b);
    printf("Digite a parte real de w: ");
    scanf("%lf", &c);
    printf("Digite a parte imaginaria de w: ");
    scanf("%lf", &d);

    // Soma
    soma_real = a + c;
    soma_imaginaria = b + d;
    printf("\nSoma: %.2lf + %.2lfi\n", soma_real, soma_imaginaria);

    // Subtração
    subtracao_real = a - c;
    subtracao_imaginaria = b - d;
    printf("Subtracao: %.2lf + %.2lfi\n", subtracao_real, subtracao_imaginaria);

    // Produto
    produto_real = (a * c) - (b * d);
    produto_imaginaria = (a * d) + (b * c);
    printf("Produto: %.2lf + %.2lfi\n", produto_real, produto_imaginaria);

    // Módulo de z e w
    modulo_z = sqrt(a * a + b * b);
    modulo_w = sqrt(c * c + d * d);
    printf("Modulo de z: %.2lf\n", modulo_z);
    printf("Modulo de w: %.2lf\n", modulo_w);

    return 0;
}
