#include <stdio.h>
#include <math.h>

unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    float x, e;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    e = 1;
    for (int i = 1; i <= n; i++) {
        e += pow(x, i) / fatorial(i);
    }
    
    return 0;
}
