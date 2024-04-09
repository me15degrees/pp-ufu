#include<stdio.h>
#include<stdlib.h>
#define nAluno 50

struct aluno
{
	char nome[nAluno];
	int matricula;
	float nota;
};

void cadastroAluno(struct aluno *al, int * n_al);
void mostraAluno(struct aluno *x, int n);

int main()
{
	struct aluno *cad = NULL;
	int n = 0, op = 0; 
	while (op != 3)
	{
		system("cls");
		printf("\nCadastro de alunos da turma A1:\n");
		printf("\nDigite a opcao desejada:\n\
1 - Cadastrar alunos. \n\
2 - Mostrar lista de alunos cadastrados.\n\
3 - Sair do programa. \n");
		scanf("%d", &op);
		getchar();
		switch (op)
		{
		case 1:
		{
			cad = (struct aluno*)realloc(cad,(n + 1) * sizeof(struct aluno));
			if (cad == NULL) 
			{
				printf("Erro ao alocar mem�ria.\n");
				return 1;
			}
			cadastroAluno(cad, &n);
			system("pause");
			break;
		}
		case 2:
		{
			printf("\nMostrar lista de alunos\n");
			system("pause");
			break;
		}
		case 3:
		{
			op = 3; 
			printf("\nO programa sera encerrado.\n");
			break;
		}
		}
	}
	free(cad);
	return 0;
}

void cadastroAluno(struct aluno* al, int* n_al)
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