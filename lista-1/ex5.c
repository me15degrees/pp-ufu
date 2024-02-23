#include <stdio.h>

int main(){
    int num, q50, q20, q10, q2, q1;
    
    printf("Digite o valor: ");
    scanf("%d", &num);

    q50 = num / 50;
    num = num % 50;
    q20 = num / 20;
    num = num % 20;
    q10 = num / 10;
    num = num % 10;
    q2 = num / 2;
    q1 = num % 2;

    printf("q50 = %d\n", q50);
    printf("q20 = %d\n", q20);
    printf("q10 = %d\n", q10);
    printf("q2 = %d\n", q2);
    printf("q1 = %d\n", q1);

    return 0;
}
