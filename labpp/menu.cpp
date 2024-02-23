#include <stdio.h>

void par();
void mul_7();
void fatorial();

int main() {
    char input;
    
    printf("escolha a opção a, b, ou c: ");
    scanf(" %c", &input);
    while (input != 'a' && input != 'A' && input != 'b' && input != 'B' && input != 'c' && input != 'C') {
        printf("escolha a opção a, b, ou c: ");
        scanf(" %c", &input);
    }

    switch (input) {
        case 'a':
            par();
            break;
        case 'b':
            mul_7();
            break;
        case 'c':
            fatorial(); 
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

void par() {
    int n, i = 2;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0) {
            printf("%i ", i);
        }
        i++;
    }
    printf("\n");
}

void mul_7() {
    int n, i;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    for (i = 14; i <= n; i += 7) { 
        printf("%i ", i);
    }
    printf("\n");
}

void fatorial(){
    int n, i;
    unsigned long long fat = 1; 

    printf("digite o valor de n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        fat *= i;
    }
    printf("O valor do fatorial de %d é: %llu\n", n, fat);
}

