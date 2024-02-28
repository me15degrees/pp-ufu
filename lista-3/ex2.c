#include <stdio.h>

int main(){
    double matrizA[3][2];
    double matrizB[2][3];
    double matrizC[3][3];
    
    for(int i =0; i<3; i++)
        for(int j = 0; j<2; j++){
            printf("digite o valor da matriz M[%d][%d]: ", i, j);
            scanf("%d",&matrizA[i][j]);
        }
        for(int i =0; i<2; i++)
        for(int j = 0; j<3; j++){
            printf("digite o valor da matriz M[%d][%d]: ", i, j);
            scanf("%d",&matrizB[i][j]);
        }



    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++){
            matrizC[i][j] = 0;
            for(int k = 0; k<3; k++)
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
        }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3;j++){
            printf("%d",matrizC[i][j]);
        }
        printf("\n");

    return 0;
}