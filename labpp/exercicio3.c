#include <stdio.h>

#define TAM 200

void trocarEspacosPorUnderscores(char str[], int vetor[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '_';
            vetor[j] = i;
            j++;
        }
    }
}

void imprimirIndices(int vetor[]) {
    printf("Índices onde os espaços foram substituídos por underscores:\n");
    for (int i = 0; vetor[i]!=0; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    char str[TAM];
    int vetor[TAM] = {0}; 
    printf("Digite uma string de até %d caracteres: ", TAM);
    fgets(str, TAM, stdin);

    trocarEspacosPorUnderscores(str, vetor);

    imprimirIndices(vetor);

    printf("String modificada: %s\n", str);

    return 0;
}
