#include <stdio.h>

int main() {
    int matrizA[][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    int soma = 0;
    int diagonalPrincipal[3] = {0}; 
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) {
                soma += matrizA[i][j];
            }
            diagonalPrincipal[i] = matrizA[i][i]; 
        }
    }

    printf("Soma dos elementos da diagonal principal: %d\n", soma);

    printf("Elementos da diagonal principal:");
    for(int i = 0; i < 3; i++) {
        printf(" %d", diagonalPrincipal[i]);
    }
    printf("\n");

    return 0;
}
