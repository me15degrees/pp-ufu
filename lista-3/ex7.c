/*Considere N = M. Verifique se A é uma matriz de permutação. Uma matriz de 
permutação é uma matriz quadrada cujos elementos são 0's ou 1's, tal que em cada linha 
e em cada coluna exista um, e apenas um, elemento igual a 1*/

#include <stdio.h>

int main() {
    int matriz[][3] = {{0,3,0}, {0,0,1}, {1,0,0}};
    int soma = 0;
    int teste = 1;
    
    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++){
            if(matriz[i][j] != 1 || matriz[i][j] != 0){
                teste = 0;
            }
        }
    if(teste)
        printf("a matriz eh de permutação\n");
    else
        printf("a matriz nao eh de permutacao\n");
    return 0;
}