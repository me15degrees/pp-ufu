#include <stdio.h>

int fibonacci(int num) {
    if (num <= 1) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main() {
    int n;

    printf("Digite um número para calcular o termo correspondente na sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Digite um número não negativo.\n");
    } else {
        int result = fibonacci(n);
        printf("O termo %d na sequência de Fibonacci é: %d\n", n, result);
    }

    return 0;
}
