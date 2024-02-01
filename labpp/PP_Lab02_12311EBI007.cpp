/* Maria Eduarda Nascimento Andrade - 12311EBI007

    1E30
    Programa que calcula peso, preço, imposto de carga e o valor total representado pelos impostos e pelo valor de carga.

    Variáveis de entrada - peso, estado, valor_total, codigo.
    Variáveis de saída - peso_quilos, imposto, valor_imposto, valor_final.
*/

#include <stdio.h>

float carga(float peso) {
    return peso * 1000;
}

float imposto(int estado, float valor_total) {
    float imposto = 0, taxa;

    while (estado < 1 || estado > 5) {
        printf("Digite o código do estado (1 a 5): ");
        scanf("%d", &estado);
    }

    switch (estado) {
        case 1:
            taxa = 0.35;
            break;
        case 2:
            taxa = 0.25;
            break;
        case 3:
            taxa = 0.15;
            break;
        case 4:
            taxa = 0.05;
            break;
        case 5:
            taxa = 0;
            break;
        }

    imposto = valor_total * taxa;
    printf("O valor do imposto sobre a carga é: R$%.2f\n", imposto);

    return imposto;
}

float total_valor(int codigo, float peso) {
    int preco;

    while (codigo < 10 || codigo > 40) {
        printf("Digite o código de carga (10 a 40): ");
        scanf("%d", &codigo);
    }

    if (codigo > 10 && codigo <= 20) {
        preco = 100;
    } else if (codigo > 20 && codigo <= 30) {
        preco = 250;
    } else if (codigo > 30 && codigo <= 40) {
        preco = 340;
    }

    printf("Preço da carga: R$%d\n", preco);
    float valor_total = preco * peso;

    return valor_total;
}

int main() {
    float peso, valor_total;
    int codigo, estado;

    printf("Digite o peso em toneladas: ");
    scanf("%f", &peso);

    float peso_quilos = carga(peso);
    printf("O peso em kg é: %.2f\n", peso_quilos);

    valor_total = total_valor(codigo, peso_quilos);
    estado = 0;  
    float valor_imposto = imposto(estado, valor_total);
    float valor_final = valor_total + valor_imposto;

    printf("O valor final carregado é de: R$%.2f\n", valor_final);

    return 0;
}

