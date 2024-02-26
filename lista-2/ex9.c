#include <stdio.h>
#include <stdlib.h>

void read_vector(int vector[], int size) {
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &vector[i]);
    }
}

int find_max(int vector[], int size) {
    int max = vector[0];

    for (int i = 1; i < size; i++) {
        if (vector[i] > max) {
            max = vector[i];
        }
    }
    return max;
}

int find_min(int vector[], int size) {
    int min = vector[0];

    for (int i = 1; i < size; i++) {
        if (vector[i] < min) {
            min = vector[i];
        }
    }
    return min;
}

void ordenate(int vector[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vector[j] < vector[i]) {
                temp = vector[j];
                vector[j] = vector[i];
                vector[i] = temp;
            }
        }
    }
}

void decrescente(int vector[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vector[i] < vector[j]) {
                temp = vector[j];
                vector[j] = vector[i];
                vector[i] = temp;
            }
        }
    }
}

void inverte(int vector[], int size){
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = vector[i];
        vector[i] = vector[size - 1 - i];
        vector[size - 1 - i] = temp;
    }
}

void find_position(int vector[], int size){
    int num;
    printf("Digite o número que você quer pesquisar: ");
    scanf("%d", &num);
    for (int i = 0; i < size; i++){
        if (vector[i] == num)
            printf("Ele aparece na posição %d\n", i);
    }
}

int main() {
    int size;
    printf("Qual o tamanho do seu vetor? ");
    scanf("%d", &size);

    int vector[size]; 

    read_vector(vector, size);

    int opcao;
    do {
        printf("Escolha uma opção:\n");
        printf("1. Encontrar valor máximo\n");
        printf("2. Encontrar valor mínimo\n");
        printf("3. Ordenar vetor em ordem crescente\n");
        printf("4. Ordenar vetor em ordem decrescente\n");
        printf("5. Inverter vetor\n");
        printf("6. Encontrar posição de um número\n");
        printf("7. Digitar novamente o vetor\n");
        printf("8. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("O valor máximo no vetor é: %d\n", find_max(vector, size));
                break;
            case 2:
                printf("O valor mínimo no vetor é: %d\n", find_min(vector, size));
                break;
            case 3:
                ordenate(vector, size);
                printf("Vetor ordenado em ordem crescente:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", vector[i]);
                }
                printf("\n");
                break;
            case 4:
                decrescente(vector, size);
                printf("Vetor ordenado em ordem decrescente:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", vector[i]);
                }
                printf("\n");
                break;
            case 5:
                inverte(vector, size);
                printf("Vetor invertido:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", vector[i]);
                }
                printf("\n");
                break;
            case 6:
                find_position(vector, size);
                break;
            case 7:
                read_vector(vector, size);
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 8);

    return 0;
}
