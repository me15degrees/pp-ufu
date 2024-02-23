#include <stdio.h>

int main() {
    int num;

    printf("digite um ano: ");
    scanf("%d", &num);

    if ((num % 4 == 0 && num % 100 != 0) || num % 400 == 0) {
        printf("eh bissexto\n");
    } else {
        printf("nao eh bissexto\n");
    }

    return 0;
}
