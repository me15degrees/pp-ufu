/* Maria Eduarda Nascimento Andrade - 12311EBI007

    1E30
    Programa que recebe do usuário três números inteiros (podendo ou não serem repetidos);
    Ordena os números de ordem crescente e mostra na tela para o usuário.

    Variáveis de entrada - num1, num2, num3
    Variáveis de saída - menor1, menor 2, menor 3
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    int temporary;

    if (num1 > num2) {
        temporary = num1;
        num1 = num2;
        num2 = temporary;
    }

    if (num2 > num3) {
        temporary = num2;
        num2 = num3;
        num3 = temporary;
    }

    if (num1 > num2) {
        temporary = num1;
        num1 = num2;
        num2 = temporary;
    }

    printf("\nOs números ordenados de forma crescente são:\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}
