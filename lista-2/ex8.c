#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removerPontuacao(char *str) {
    int len = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            str[j++] = tolower(str[i]); 
        }
    }
    str[j] = '\0'; 
}

int ehPalindromo(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    char frase[1000];
    
    printf("Digite uma palavra ou frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    removerPontuacao(frase);
    
    if (ehPalindromo(frase)) {
        printf("A frase \"%s\" é um palíndromo.\n", frase);
    } else {
        printf("A frase \"%s\" não é um palíndromo.\n", frase);
    }

    return 0;
}
