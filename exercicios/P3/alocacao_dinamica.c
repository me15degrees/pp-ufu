#include <stdlib.h>
#include <stdio.h>

int main(){
    float *vet;
    int n, i;
    printf("informe a quantidade de números que serão digitados: ");
    scanf("%i", &n);
    vet = (float *)malloc(n * sizeof(float)); // alocando dinamicamente

    for(i = 0; i < n; i++) // entrada de dados
        scanf("%f",&vet[i]);
    
    for(i=0; i < n; i++) // saída de dados
        printf("\n%f", vet[i]);

    free(vet);
    return 0;
}
