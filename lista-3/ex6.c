#include <stdio.h>

int main() {
    int matrizA[][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    int soma = 0;
    int diagonalSecundaria[3] = {0}; 

    for(int i = 0; i < 3; i++) {
        soma += matrizA[i][2 - i]; 
        diagonalSecundaria[i] = matrizA[i][2 - i]; 
    }

    printf("Soma dos elementos da diagonal secundária: %d\n", soma);

    printf("Elementos da diagonal secundária:");
    for(int i = 0; i < 3; i++) {
        printf(" %d", diagonalSecundaria[i]);
    }
    printf("\n");

    return 0;
}
