/* Faça um programa que conte de 10 a 3, mostrando na tela, e calcula e mostra a 
soma desses números, primeiramente usando laço while() e depois com o laço for(). */

#include <stdio.h>

void main(){
    int i = 3, soma = 0;
    while (i <= 10){
        soma += i;
        i++;
        printf("a soma desses números usando while é %d\n", soma);
    }
    soma = 0;
    printf("\n");
    for (i = 3; i<= 10; i++){
        soma += i;
        printf("a soma desses números usando for é %d\n", soma);
    }
    
}