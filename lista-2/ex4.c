#include <stdio.h>

int main() {
    int numeroLido, numeroInvertido = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numeroLido);

    while (numeroLido != 0) {
        digito = numeroLido % 10; 
        numeroInvertido = numeroInvertido * 10 + digito; 
        numeroLido /= 10; 
    }

    printf("O número invertido é: %d\n", numeroInvertido);

    return 0;
}
