#include <stdio.h>

void preenche_vetor(float alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i]);
    }
}

float maior_nota(float alunos[], int n) {
    float maior = alunos[0];

    for (int i = 1; i < n; i++) {
        if (alunos[i] > maior) {
            maior = alunos[i];
        }
    }
    return maior;
}

float media(float alunos[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += alunos[i];
    }
    return soma / n;
}

float moda(float alunos[], int n) {
    float moda = alunos[0];
    int counter, maxCounter = 0, idx;

    for (int i = 0; i < n; i++) {
        counter = 0;
        for (int j = 0; j < n; j++) {
            if (alunos[j] == alunos[i]) {
                counter++;
            }
        }
        if (counter > maxCounter) {
            maxCounter = counter;
            moda = alunos[i];
            idx = i;
        }
    }
    return idx, moda;
}

int main() {
    int n;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    float alunos[n];

    printf("Digite o valor das notas dos alunos:\n");
    preenche_vetor(alunos, n);

    printf("A maior nota é: %.2f\n", maior_nota(alunos, n));
    printf("A média das notas é: %.2f\n", media(alunos, n));
    printf("A moda das notas do Aluno %d é: %.2f\n", moda(alunos, n));

    return 0;
}
