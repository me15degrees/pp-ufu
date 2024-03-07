#include <stdio.h>
#include <string.h>

#define MAX_CHARS 200

int contar_palavras(char str[]) {
    int contador = 0;
    int dentro_da_palavra = 0; 

    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            dentro_da_palavra = 1;
        } else {
    
            if (dentro_da_palavra == 1) {
                contador++;
                dentro_da_palavra = 0;
            }
        }
    }

    if (dentro_da_palavra == 1) {
        contador++;
    }

    return contador;
}

int main() {
    char str[MAX_CHARS];

    printf("Digite uma string de até %d caracteres: ", MAX_CHARS);
    fgets(str, MAX_CHARS, stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int num_palavras = contar_palavras(str);

    printf("Número de palavras na string: %d\n", num_palavras);

    return 0;
}
