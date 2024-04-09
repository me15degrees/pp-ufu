#include<stdio.h>
#include<stdlib.h>
#define nAluno 50

struct aluno
{
    char nome[nAluno];
    int matricula;
    float nota;
};

void Cadastro(struct aluno * al, int* n_al);
void exibirAluno(struct aluno* x, int n);
void aprovado(struct aluno* al, int n);
void procura(struct aluno* al, int n);

int main()
{
    struct aluno *cad = NULL;
    int n = 0, op = 0;
    while (op != 5)
    {
        system("cls");
        printf("\nCadastro de alunos da turma A1:\n");
        printf("\nDigite a opcao desejada:\n\
1 - Cadastrar alunos. \n\
2 - Mostrar lista de alunos cadastrados.\n\
3 - Exibir nota.\n\
4 - Procurar aluno\n\
5 - Sair do programa. \n");
        scanf("%d", &op);
        getchar();
        switch (op)
        {
        case 1:
        {
            cad = (struct aluno*)realloc(cad, (n + 1) * sizeof(struct aluno));
            if (cad == NULL)
            {
                printf("Erro ao alocar memória.\n");
                return 1;
            }
            Cadastro(cad, &n);
            system("pause");
            break;
        }
        case 2:
        {
            if (n == 0) {
                printf("\nNao ha alunos cadastrados\n");
            }
            exibirAluno(cad, n);
            system("pause");
            break;
        }
        case 3:
        {
            aprovado(cad, n);
            system("pause");
            break;
        }
        case 4:
        {
            procura(cad, n);
            system("pause");
            break;
        }
        case 5: {
            op = 5;
            printf("\nO programa sera encerrado.\n");
            break;
        }
        }
    }
    free(cad);
    return 0;
}

void Cadastro(struct aluno* al, int* n_al)
{

    printf("\nNome aluno: ");
    fgets(al[*n_al].nome, 50, stdin);
    printf("\nMatricula: ");
    scanf("%d", &al[*n_al].matricula);
    getchar();
    printf("\nNota: ");
    scanf("%f", &al[*n_al].nota);
    getchar();
    (*n_al)++;
}
void exibirAluno(struct aluno* al, int n) {

    for (int i = 0; i < n; i++)
    {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s", al[i].nome);
        printf("Matricula: %d\n", al[i].matricula);
        printf("Nota: %.2f\n", al[i].nota);
    }
}
void aprovado(struct aluno* al, int n) {
    int m;
    printf("Digite a matricula do aluno que deseja buscar.\n");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        if (al[i].matricula == m)
        {

            printf("Nome: %s", al[i].nome);
            printf("Matricula: %d\n", al[i].matricula);
            printf("Nota: %.2f\n", al[i].nota);
            if (al[i].nota >= 6)
            {
                printf("O Aluno foi aprovado.");
            }
            else
            {
                printf("O aluno nao foi aprovado");
            }
        }
    }
}
void procura(struct aluno* al, int n)
{
    int m, encontrado = 0;

    printf("Digite a matricula do aluno que deseja buscar.\n");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        if (al[i].matricula == m)
        {
            printf("\nAluno %d:\n", i + 1);
            printf("Nome: %s", al[i].nome);
            printf("Matricula: %d\n", al[i].matricula);
            printf("Nota: %.2f\n", al[i].nota);
            encontrado = 1;
        }

        else if (encontrado == 0)
        {
            printf("\nMatricula nao encontrada.\n");
        }

    }
}
