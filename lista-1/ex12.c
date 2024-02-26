/*Faça um programa que compute quantos são os múltiplos de 2, de 3 e de 5 entre 1 e 
100; compute também quantos são os números múltiplos de 2, 3 e 5 ao mesmo tempo. 
(utilize while()).*/

#include <stdio.h>

int main() {
    int m2 = 0, m3 = 0, m5 = 0, all = 0;
    int i = 1;
    
    while (i <= 100) {
        if (i % 2 == 0)
            m2++;
        if (i % 3 == 0)
            m3++;
        if (i % 5 == 0)
            m5++;
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
            all++;
        
        i++; 
    }
    
    printf("Quantidade de múltiplos de 2: %d\n", m2);
    printf("Quantidade de múltiplos de 3: %d\n", m3);
    printf("Quantidade de múltiplos de 5: %d\n", m5);
    printf("Quantidade de múltiplos de 2, 3 e 5 ao mesmo tempo: %d\n", all);

    return 0;
}