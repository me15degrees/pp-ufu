#include <stdio.h>

#define TAM 200

int main() {
    char str[TAM];

    printf("Digite uma string de até %d caracteres: ", TAM);
    fgets(str, TAM, stdin);

    int palavras = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            palavras++;

            while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
                i++;
            }
        }
    }
    
    printf("Número de palavras na string: %d\n", palavras);
    
    return 0;
}
