#include <stdio.h>

void fatorial(double *num, float *f){
    int i;
    *f = 1;
    for(i= *num; i>1; i--){
        *f *= i;
    }
}

int main(){
    double n;
    float fat;
    printf("digite um número inteiro: ");
    scanf("%lf", &n);
    fatorial(&n, &fat);
    printf("\nO fatorial de %lf é: %f\n", n, fat);
    return 0;
}