#include <stdio.h>

int main() {
    char nome[100]; 
    scanf("%s", nome); 
    int tamanho = 0;
   
    for (int i = 0; nome[i] != '\0'; i++) {
        tamanho++;
    }

    printf("O tamanho da string é %d\n", tamanho);
    
    return 0;
}

