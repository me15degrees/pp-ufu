#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int igual = 1; 
    int i;

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            igual = 0; 
            break;
        }
    }

    if (igual == 1)
        printf("As strings são iguais.\n");
    else
        printf("As strings são diferentes.\n");

    return 0;
}
