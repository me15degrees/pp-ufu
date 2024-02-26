#include <stdio.h>

int main() {
    int tamanho = 10;
    int vetorA[tamanho], vetorB[tamanho], vetorC[tamanho];
    
    printf("Digite os elementos do vetorA:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os elementos do vetorB:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorB[i]);
    }

    printf("Produto de Kronecker:\n");
    for (int i = 0; i < tamanho; i++) {
        vetorC[i] = vetorA[i] * vetorB[i];
        printf("%d\n", vetorC[i]);
        
    }
    
    return 0;
}
