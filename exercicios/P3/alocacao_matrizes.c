#include <stdio.h>
#include <stdlib.h>

int main() {
    float **mat;
    int i, nlinhas, ncolunas, j;
    
    printf("Digite o número de linhas: ");
    scanf("%i", &nlinhas);
    printf("Digite o número de colunas: ");
    scanf("%i", &ncolunas);

    mat = (float **) malloc(nlinhas * sizeof(float*));
    for(i = 0; i < nlinhas; i++)
        mat[i] = (float *) malloc(ncolunas * sizeof(float));

    printf("Digite os elementos da matriz:\n");
    for(i = 0; i < nlinhas; i++)
        for(j = 0; j < ncolunas; j++)
            scanf("%f", &mat[i][j]);
    
    printf("Matriz digitada:\n");
    for(i = 0; i < nlinhas; i++) {
        for(j = 0; j < ncolunas; j++)
            printf("%.2f ", mat[i][j]); // adiciona espaçamento e formatação para melhor visualização
        printf("\n");
    }

    // libera a memória alocada
    for(i = 0; i < nlinhas; i++)
        free(mat[i]);
    free(mat);

    return 0;
}
