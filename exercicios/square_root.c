#include <stdio.h>

int square(int num){
    int raiz = 0, impar = 1, soma = 0;
    while(soma<num){
        soma = soma + impar;
        impar = impar + 2;
        raiz ++;
    }
    if (soma == num)
        return raiz;
    return -1;
}
int main(){
    int numero, resp;
    printf("digite um numero para calcular a raiz quadrada: ");
    scanf("%d",&numero);
    resp = square(numero);
    if (resp == -1)
        printf("\nO programa nao pode calcular a raiz");
    else
        printf("\n raiz = %d\n", resp);
        return 0;

}
