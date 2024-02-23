#include <stdio.h>

int main() {
    // declaração de variáveis
    double raio, area;

    // solicita ao usuário para inserir o valor do raio
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);

    // calcula a área do círculo usando a fórmula A = π * r^2
    area = 3.14159265358979323846 * raio * raio;

    // imprime o resultado formatado
    printf("A área do círculo com raio %.2f é %.2f\n", raio, area);

    return 0;
}

