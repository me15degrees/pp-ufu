#include <stdio.h>

int main(){
    int num;
    printf("Digite um número de até 3 dígitos: ");
    scanf("%d", &num);

    if (num < 0 || num > 999) {
        printf("Número inválido. Por favor, digite um número de até 3 dígitos.\n");
        return 1; 
    }

    int centenas = num / 100;
    int dezenas = (num / 10) % 10;
    int unidades = num % 10;

    int soma = centenas + dezenas + unidades;

    printf("A soma é %d\n", soma);

    return 0;
}
