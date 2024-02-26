#include <stdio.h>
#include <string.h>

int main() {
    char nome[31]; 
    printf("Digite um nome de até 30 caracteres: ");
    scanf("%30s", nome); 

    int tamanho = strlen(nome); 

    for (int i = 0; i < tamanho / 2; i++) {
        char temp = nome[i];
        nome[i] = nome[tamanho - 1 - i];
        nome[tamanho - 1 - i] = temp;
    }

    printf("Nome invertido: %s\n", nome);

    return 0;
}
