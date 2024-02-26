#include <stdio.h>

int main() {
    int x, y;
    int resultado = 1; 
    
    printf("Digite x: ");
    scanf("%d", &x);
    
    printf("Digite y: ");
    scanf("%d", &y);

    int i = 1;
    do {
        resultado *= x; 
        i++; 
    } while (i <= y); 

    printf("x elevado a y = %d\n", resultado);

    return 0;
}
