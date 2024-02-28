#include <stdio.h>

int main() {
    double mat[4][5] = {{1, 2, 3, 4, 5}, {0, 0, 1, 1, 0}, {9, 9, 9, 9, 99}, {0, 0, 0, 0, 0}};
    double maior = mat[0][0]; 

    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] > maior) { 
                maior = mat[i][j];
            }
        }
    }

    printf("O maior valor da matriz é %d\n", maior); 

    return 0;
}
