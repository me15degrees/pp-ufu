#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void criptografa(char frase[], int size) {
    for (int i = 0; i < size - 1; i++) {
        frase[i] = frase[i] + 1; // Increment each character by 1
    }
}

void descriptografa(char frase[], int size) {
    for (int i = 0; i < size - 1; i++) {
        frase[i] = frase[i] - 1; // Decrement each character by 1
    }
}

int main() {
    char frase[101];
    int size;

    printf("Digite uma frase de até 100 caracteres: ");
    fgets(frase, sizeof(frase), stdin);

    size = strlen(frase); // Calculate the length of the string

    int opcao;
    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Criptografar\n");
        printf("2. Descriptografar\n");
        printf("3. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                criptografa(frase, size);
                printf("Frase criptografada: %s\n", frase);
                break;
            case 2:
                descriptografa(frase, size);
                printf("Frase descriptografada: %s\n", frase);
                break;
            case 3:
                exit(0);
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
