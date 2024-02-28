#include <stdio.h>
#include <string.h>

#define TAMANHO_MARCA 15
#define TAMANHO_COR 10
#define TAMANHO_VETCARROS 20

struct Carro {
    char marca[TAMANHO_MARCA];
    int ano;
    char cor[TAMANHO_COR];
    float preco;
};

struct Carro vetcarros[TAMANHO_VETCARROS];

void lerVetorCarros() {
    for (int i = 0; i < TAMANHO_VETCARROS; i++) {
        printf("Digite a marca do carro %d: ", i + 1);
        scanf("%s", vetcarros[i].marca);
        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &vetcarros[i].ano);
        printf("Digite a cor do carro %d: ", i + 1);
        scanf("%s", vetcarros[i].cor);
        printf("Digite o preço do carro %d: ", i + 1);
        scanf("%f", &vetcarros[i].preco);
    }
}

void imprimirCarrosPorPreco(float preco) {
    printf("Carros com preço igual ou menor a %.2f:\n", preco);
    for (int i = 0; i < TAMANHO_VETCARROS; i++) {
        if (vetcarros[i].preco <= preco) {
            printf("Marca: %s, Cor: %s, Ano: %d\n", vetcarros[i].marca, vetcarros[i].cor, vetcarros[i].ano);
        }
    }
}

void imprimirCarrosPorMarca(char marca[]) {
    printf("Carros da marca %s:\n", marca);
    for (int i = 0; i < TAMANHO_VETCARROS; i++) {
        if (strcmp(vetcarros[i].marca, marca) == 0) {
            printf("Preço: %.2f, Ano: %d, Cor: %s\n", vetcarros[i].preco, vetcarros[i].ano, vetcarros[i].cor);
        }
    }
}

void verificarCarro(char marca[], int ano, char cor[]) {
    int encontrado = 0;
    for (int i = 0; i < TAMANHO_VETCARROS; i++) {
        if (strcmp(vetcarros[i].marca, marca) == 0 && vetcarros[i].ano == ano && strcmp(vetcarros[i].cor, cor) == 0) {
            printf("Existe um carro com as características fornecidas. Preço: %.2f\n", vetcarros[i].preco);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Não existe carro com as características fornecidas.\n");
    }
}

int main() {
    lerVetorCarros();
    
    float preco;
    printf("\nDigite um preço para verificar os carros com preço igual ou menor: ");
    scanf("%f", &preco);
    imprimirCarrosPorPreco(preco);

    char marca[TAMANHO_MARCA];
    printf("\nDigite a marca para verificar os carros dessa marca: ");
    scanf("%s", marca);
    imprimirCarrosPorMarca(marca);

    char marcaVerificar[TAMANHO_MARCA];
    int anoVerificar;
    char corVerificar[TAMANHO_COR];
    printf("\nDigite a marca, ano e cor para verificar se existe um carro com essas características: ");
    scanf("%s %d %s", marcaVerificar, &anoVerificar, corVerificar);
    verificarCarro(marcaVerificar, anoVerificar, corVerificar);

    return 0;
}
