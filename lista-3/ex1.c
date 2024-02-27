#include <stdio.h>

int main() {
    double matrizA[2][3];
    double matrizB[2][3];
    double result[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor do elemento %d %d da matriz A: ", i, j);
            scanf("%lf", &matrizA[i][j]);
            printf("Digite o valor do elemento %d %d da matriz B: ", i, j);
            scanf("%lf", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
