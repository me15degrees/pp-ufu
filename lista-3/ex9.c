#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int n;
    printf("Digite o valor da ordem da matriz: ");
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Tamanho da matriz excede o máximo permitido.\n");
        return 1;
    }

    int matriz[MAX_SIZE][MAX_SIZE] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == j) { 
                matriz[i][j] = 1;
            }
            else
                matriz[i][j] = matriz[i-1][j-1]+matriz[i-1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i>j || i == j)
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
