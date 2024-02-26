/* Faça um programa que faça operações simples de frações: 
• Crie e leia duas frações p e q, compostas por numerador e denominador.
• Encontre o máximo divisor comum entre o numerador e o denominador, e
simplifique as frações.
• Apresente a soma, a subtração, o produto e o quociente entre as frações lidas. */
#include <stdio.h>

// protótipo da função para evitar declaração implícita
int mdc(int a, int b);

int main(){
    int nump, numq, denp, denq;
    
    printf("Digite o numerador e o denominador da frac1: ");
    scanf("%d %d", &nump, &denp);

    printf("Digite o numerador e o denominador da frac2: ");
    scanf("%d %d", &numq, &denq);


    int mdc_nump_denp = mdc(nump, denp);
    nump /= mdc_nump_denp;
    denp /= mdc_nump_denp;

    int mdc_numq_denq = mdc(numq, denq);
    numq /= mdc_numq_denq;
    denq /= mdc_numq_denq;

    printf("\nfrac1 -> %d/%d\n", nump, denp);
    printf("\nfrac2 -> %d/%d\n", numq, denq);
}

int mdc(int a, int b) { 
    int temp;
    while (b != 0) { 
        temp = b; 
        b = a % b; 
        a = temp; 
    }
    return a;
}