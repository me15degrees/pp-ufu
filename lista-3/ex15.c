#include <stdio.h>

struct Vetor {
    float x;
    float y;
    float z;
};

struct Vetor somaVetores(struct Vetor v1, struct Vetor v2) {
    struct Vetor soma;

    soma.x = v1.x + v2.x;
    soma.y = v1.y + v2.y;
    soma.z = v1.z + v2.z;

    return soma;
}

int main() {

    struct Vetor vetor1 = {1.0, 2.0, 3.0};
    struct Vetor vetor2 = {4.0, 5.0, 6.0};

    struct Vetor resultado = somaVetores(vetor1, vetor2);

    printf("A soma dos vetores (%.2f, %.2f, %.2f) e (%.2f, %.2f, %.2f) é: (%.2f, %.2f, %.2f)\n",
           vetor1.x, vetor1.y, vetor1.z,
           vetor2.x, vetor2.y, vetor2.z,
           resultado.x, resultado.y, resultado.z);

    return 0;
}
