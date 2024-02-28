#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[1][MAX_COLS], int m, int n) {
    int result[MAX_ROWS][1];

    for (int i = 0; i < m; i++) {
        result[i][0] = 0;
        for (int j = 0; j < n; j++) {
            result[i][0] += mat1[i][j] * mat2[0][j];
        }
    }

    printf("O resultado da multiplicação é:\n");
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i][0]);
    }
}

int main() {
    int m, n;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);

    if (m > MAX_ROWS || n > MAX_COLS) {
        printf("Tamanho da matriz excede o máximo permitido.\n");
        return 1;
    }

    int mat1[MAX_ROWS][MAX_COLS], mat2[1][MAX_COLS];

    printf("Digite os elementos da matriz %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Digite os elementos da matriz 1x%d:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &mat2[0][i]);
    }

    multiplyMatrices(mat1, mat2, m, n);

    return 0;
}
