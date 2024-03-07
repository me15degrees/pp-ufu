#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 50

int verifica_carac(char carac) {
    if (carac >= 65 && carac <= 90) { 
        return 1;
    } else if (carac >= 97 && carac <= 122) { 
        return 0;
    } else {
        return -1; 
    }
}

void troca_carac(char mensagem[]) {
    for (int i = 0; i < strlen(mensagem); i++) {
        if (verifica_carac(mensagem[i]) == 1) { 
            mensagem[i] = mensagem[i] + 32; 
        } else if (verifica_carac(mensagem[i]) == 0) { 
            mensagem[i] = mensagem[i] - 32; 
        }
    }
}

int main() {
    char mensagem[TAM];
    int menu;

    printf("Digite o número que você deseja acessar dentro do menu:\n");
    printf("1 - Verificar se o caractere é maiúsculo ou minúsculo\n");
    printf("2 - Converter maiúsculo para minúsculo\n");
    printf("3 - Sair do programa\n");
    printf("digite sua escolha: ");
    scanf("%d", &menu);
    printf("Digite uma palavra: ");
    scanf("%s", mensagem);

    switch(menu) {
        case 1:
            int indice;
            printf("qual indice de caractere que voce quer verificar? ");
            scanf("%d",indice);
            break;
        case 2:
            troca_carac(mensagem);
            printf("Palavra modificada: %s\n", mensagem);
            break;
        case 3:
            printf("Encerrando o programa...\n");
            exit(0);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
