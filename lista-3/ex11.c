#include <stdio.h>
#include <stdbool.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void multiplyMatrixVector(double A[MAX_ROWS][MAX_COLS], double X[MAX_COLS], double result[MAX_ROWS], int m, int n) {
    for (int i = 0; i < m; i++) {
        result[i] = 0;
        for (int j = 0; j < n; j++) {
            result[i] += A[i][j] * X[j];
        }
    }
}

bool compareVectors(double B[MAX_ROWS], double result[MAX_ROWS], int m) {
    for (int i = 0; i < m; i++) {
        if (B[i] != result[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &m);

    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &n);

    if (m > MAX_ROWS || n > MAX_COLS) {
        printf("Tamanho da matriz excede o máximo permitido.\n");
        return 1;
    }

    double A[MAX_ROWS][MAX_COLS], X[MAX_COLS], B[MAX_ROWS], result[MAX_ROWS];

    printf("Digite os elementos da matriz A %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    printf("Digite os elementos do vetor X %dx1:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &X[i]);
    }

    printf("Digite os elementos do vetor B %dx1:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%lf", &B[i]);
    }

    multiplyMatrixVector(A, X, result, m, n);

    if (compareVectors(B, result, m)) {
        printf("O vetor X é uma solução do sistema de equações.\n");
    } else {
        printf("O vetor X não é uma solução do sistema de equações.\n");
    }

    return 0;
}
