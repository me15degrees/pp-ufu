#include <stdio.h>

int contar_itens(float array[], int tamanho) {
    return tamanho;
}

int main() {
    float vet[6], aux;
    int size = contar_itens(vet, sizeof(vet) / sizeof(vet[0]));

    int i, j;
    for (i = 0; i < size; i++) {
        printf("\nVet[%d] = ", i + 1);
        scanf("%f", &vet[i]);
    }
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for (i = 0; i < size; i++)
        printf("\nVet[%d] = %.2f\n", i + 1, vet[i]);

    return 0;
}
