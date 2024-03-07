#include <stdio.h>
#include <string.h>

int main(){
    char mensagem[100], caractere;
    int i, cont = 0;
    printf("digite uma mensagem: ");
    fgets(mensagem, sizeof(mensagem),stdin);
    printf("\nqual caractere você deseja contar na mensagem? ");
    scanf("%c", &caractere);
    for(i = 0; mensagem[i] != 0; i++){
        if (mensagem[i] == caractere)
            cont++;
    }
    printf("\no número de ocorrência do caractere %c na mensagem digitada é: %d\n", caractere, cont);
    return 0;
}

