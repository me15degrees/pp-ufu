/*Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2 
digitados pelo usuário via teclado. O programa fica pedindo estes valores e calculando 
até que o usuário entre com um valor de resistência igual a zero (utilize laço 
do{}while()). Fórmula: R=R1*R2/(R1+R2). */

#include <stdio.h>

int main() {
    float r1, r2, req;
    
    do {
        printf("Digite o valor de r1 (ou 0 para sair): ");
        scanf("%f", &r1);
        
        printf("Digite o valor de r2: ");
        scanf("%f", &r2);
        
        req = (r1 * r2) / (r1 + r2);
        printf("O valor de Req é %.2f ohms\n", req);
        
    } while (1); 
    
    return 0;
}
