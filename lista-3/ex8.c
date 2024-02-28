#include <stdio.h>
#include <stdbool.h>

#define TAMANHO 3

bool verificaQuadradoMagico(int quadrado_magico[TAMANHO][TAMANHO]) {
    int soma_diagonal1 = 0;
    int soma_diagonal2 = 0;

    for (int i = 0; i < TAMANHO; i++) {
        soma_diagonal1 += quadrado_magico[i][i];
        soma_diagonal2 += quadrado_magico[i][TAMANHO - i - 1];
    }

    if (soma_diagonal1 != soma_diagonal2)
        return false;

    for (int i = 0; i < TAMANHO; i++) {
        int soma_linha = 0;
        int soma_coluna = 0;

        for (int j = 0; j < TAMANHO; j++) {
            soma_linha += quadrado_magico[i][j];
            soma_coluna += quadrado_magico[j][i];
        }

        if (soma_linha != soma_diagonal1 || soma_coluna != soma_diagonal1)
            return false;
    }
    
    return true;
}

int main() {
    int quadrado_magico[TAMANHO][TAMANHO] = {{8, 0, 7}, {4, 5, 6}, {3, 10, 2}};

    if (verificaQuadradoMagico(quadrado_magico))
        printf("A matriz representa um quadrado magico.\n");
    else
        printf("A matriz nao representa um quadrado magico.\n");

    return 0;
}
