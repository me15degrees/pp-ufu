/* Maria Eduarda Nascimento Andrade - 12311EBI007

    1E30
    Programa que realiza operações diferentes dependendo do que a pessoa escolher no menu.
    Variáveis de entrada - input, n, i, divida
    Variáveis de saída - n, i, divida
*/

#include <stdio.h>
#include <stdlib.h>

void impar();
void pares();
void juros();

int main() {
    char input;
    
    printf("Escolha a opção 1, 2, 3 ou 4: ");
    scanf(" %c", &input);
    
    while (input != '1' && input != '2' && input != '3' && input != '4') {
        printf("Opção inválida! Escolha a opção 1, 2, 3 ou 4: ");
        scanf(" %c", &input);
    }

    switch (input) {
        case '1':
            impar();
            break;
        case '2':
            pares();
            break;
        case '3':
            juros(); 
            break;
        case '4':
            exit(0);
        default:
            printf("Opção inválida!\n");
            break; 
    }

    return 0;
}

void impar() {
    int n, i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; n >= i; n--) {
        if (n % 2 != 0) {
            printf("%i ", n);
        }
    }
}

void pares() {
    int n, i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) { 
        if (i >= 100) {
            printf("%i ", i);
        }
    }
}

void juros(){
    float divida;
    int i;

    printf("Digite o valor da dívida inicial: ");
    scanf("%f", &divida);

    for(i = 1; i <= 3; i++){
        divida *= 1.075;
    }

    printf("O valor da dívida após 3 anos é: %.2f\n", divida);
}
