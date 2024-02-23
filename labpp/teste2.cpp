#include <stdio.h>
#include <stdlib.h>

int eh_primo(int num){
    if (num <= 1) 
        return 1; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) 
            return 1; 
    }
    return 0; 
}


void intervalo(int a, int b) {

    for (int i = a; i <= b; i++) {
        if (eh_primo(i) == 0) { 
            printf("%d é primo.\n", i);
        }
    }
    printf("\n");
}

int main() {
    int menu, num1, num2, num3;
    printf("Digite um numero de 1 a 3: ");
    scanf("%d", &menu);
    
    switch(menu) {
        case 1:
            printf("Digite um numero: ");
            scanf("%d", &num1);
            if (eh_primo(num1) == 0) {
                printf("%d é primo.\n", num1);
            } else {
                printf("%d não é primo.\n", num1);
            }
            break;

        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%d", &num2);
            printf("Digite o segundo numero: ");
            scanf("%d", &num3);
            intervalo(num2, num3); 
            break;

        case 3:
            exit(0);

        default:
            printf("Opção inválida.\n");
            break;
    }
    
    return 0;
}
