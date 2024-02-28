#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

void verificarPonto(struct Ponto v1, struct Ponto v2, struct Ponto p) {
    if (p.x >= v1.x && p.x <= v2.x && p.y >= v1.y && p.y <= v2.y) {
        printf("O ponto está dentro do retângulo.\n");
    } else {
        printf("O ponto está fora do retângulo.\n");
    }
}

int main() {

    struct Ponto v1, v2;

    printf("Digite as coordenadas do vértice inferior esquerdo (x y): ");
    scanf("%d %d", &v1.x, &v1.y);

    printf("Digite as coordenadas do vértice superior direito (x y): ");
    scanf("%d %d", &v2.x, &v2.y);

    struct Ponto p;
    printf("Digite as coordenadas do ponto a ser verificado (x y): ");
    scanf("%d %d", &p.x, &p.y);

    verificarPonto(v1, v2, p);

    return 0;
}
