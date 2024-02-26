#include <stdio.h>

int main() {
    int range = 122 - 97;
    int dif = 97 - 65;
    
    char string[] = "Exemplo de String";

    int i;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - dif;
        }
    }

    printf("String em maiúsculo: %s\n", string);

    return 0;
}
