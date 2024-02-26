#include <stdio.h>

void main(){
    int num;
    printf("Digite o número que você deseja verificar se é triangular: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        if (i*(i+1)*(i+2) == num) {
            printf("É triangular: %d * %d * %d = %d\n", i, i + 1, i + 2, num);
            return; 
        }
    }
    
    printf("Não é triangular.\n");
}