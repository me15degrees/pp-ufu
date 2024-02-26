#include <stdio.h>


int main() {
    int tamanho;
  
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int A[tamanho];
  
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &A[i]);
    }
    
    int IMP[tamanho], PAR[tamanho];
    int cont_IMP = 0, cont_PAR = 0; 
   
    for (int i = 0; i < tamanho; i++) {
        if (A[i] % 2 == 0) {
            PAR[cont_PAR++] = A[i]; 
        } else {
            IMP[cont_IMP++] = A[i]; 
        }
    }

    printf("Vetor IMP (ímpares):\n");
    for (int i = 0; i < cont_IMP; i++) {
        printf("%d ", IMP[i]);
    }
    printf("\n");
    
    printf("Vetor PAR (pares):\n");
    for (int i = 0; i < cont_PAR; i++) {
        printf("%d ", PAR[i]);
    }
    printf("\n");

    return 0;
}
