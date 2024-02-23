#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void preenche_matriz(float matriz[][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("matriz[%d][%d] = ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void soma_matrizes(float matrizA[][MAX_COLUNAS], float matrizB[][MAX_COLUNAS], float resultado[][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void imprime_matriz(float matriz[][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    if (linhas > MAX_LINHAS || colunas > MAX_COLUNAS) {
        printf("Tamanho excede o limite máximo de linhas e colunas.\n");
        return 1;
    }

    float matrizA[MAX_LINHAS][MAX_COLUNAS], matrizB[MAX_LINHAS][MAX_COLUNAS], resultado[MAX_LINHAS][MAX_COLUNAS];

    printf("Preencha a matriz A:\n");
    preenche_matriz(matrizA, linhas, colunas);

    printf("Preencha a matriz B:\n");
    preenche_matriz(matrizB, linhas, colunas);

    soma_matrizes(matrizA, matrizB, resultado, linhas, colunas);

    printf("A soma das matrizes A e B resulta em:\n");
    imprime_matriz(resultado, linhas, colunas);

    return 0;
}


