#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char mensagem[200];
    int i;
    printf("digite uma mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    
    for(i=0; mensagem[i] != '\0'; i++){
        if(mensagem[i] >= 'a' && mensagem[i] <= 'z'){
            mensagem[i] = mensagem[i] - 32;
        }
    }
    printf("\nmensagem com letras maiúsculas: %s", mensagem);
    return 0;
}
