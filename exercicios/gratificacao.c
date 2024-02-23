#include <stdio.h>

float gratificacao(int extra, int falta) {
    float gratificacao;

    gratificacao = extra - (2.0 / 3) * falta;

    return gratificacao;
}

void premio(float gratificacao) {
    int premio;
    if (gratificacao > 40) {
        premio = 500;
    }
    else if (gratificacao > 30) {
        premio = 400;
    }
    else if (gratificacao > 20 ) {
        premio = 400;
    }
    else if (gratificacao > 10 ) {
        premio = 400;
    }
    else if (gratificacao <= 10) {
        premio = 400;
    }

    printf("Prêmio dele: %d\n", premio);
}

int main() {
    int num, extra, falta;

    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Digite o valor de horas extras para o funcionário %d: ", i + 1);
        scanf("%d", &extra);

        printf("Digite o valor de horas de falta para o funcionário %d: ", i + 1);
        scanf("%d", &falta);

        float gratificacao_valor = gratificacao(extra, falta);
        premio(gratificacao_valor);
    }

    return 0;
}
