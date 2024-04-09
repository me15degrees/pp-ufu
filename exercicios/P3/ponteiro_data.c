#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}t_data;

int main(){
    t_data hoje, *p;

    p = &hoje;
    p->dia = 13;
    p->mes = 10;
    p->ano = 2010;
    
    printf("A data de hoje é %d %d %d\n", hoje.dia, hoje.mes, hoje.ano);

    return 0;
}