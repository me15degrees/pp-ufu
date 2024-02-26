#include <stdio.h>
   
int main(){
    int num;

    printf("digite um numero: ");
    scanf("%d",&num);

    while (num <= 100){
        printf(" %d\n",num);
        num *= 3;
    }
    printf(" %d\n",num);
    return 0;
}