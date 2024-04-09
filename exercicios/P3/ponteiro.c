#include <stdio.h>

int main(){
    int *ptr;
    int a;
    printf("\ndigite o valor de a: ");
    scanf("%i",&a);
    ptr = &a;
    printf("\no endereço de memória %x em hex: ", ptr);
    printf("\no endereço de memória %p em ponteiro: ", ptr);
    printf("\no endereço de memória %i em int: ", ptr);
    printf("\nO endereço de memória %p usando void*: ", (void*)ptr); // aparentemente esse é o padrão ansi (?) -> %p e (void*)ptr
    printf("\no que o ptr guarda de valor é %i que é igual a variável a %i\n", *ptr, a);
    return 0;
}
