#include<stdio.h>
#include<stdlib.h>
#define nMax 20
#define col 3
#define lin 2

void geraVetor(float vet[], int n);
void mostraVetor(float vet[], int n);
void geraMatriz(float mat[][col]);
void mostraMatriz(float mat[][col]);

int main()
{
	int op, sair = 0; 
	while (sair != 3)
	{
		system("cls");
		printf("\nEscolha:\n \
1 Gerar e mostrar vetor\n \
2 Gerar e mostrar matriz\n \
3 Sair do programa\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
		{
			printf("\n------------------------\n");
			printf("\nGera e mostra vetor\n");
			float vetor[nMax];
			int n=0;
			while (n < 1 || n >= 20)
			{
				printf("\nInforme o tamanho do vetor (<20): ");
				scanf("%d", &n);
			}
			geraVetor(vetor, n);
			mostraVetor(vetor, n);
			system("pause");
			break;
		}
		case 2:
		{
			printf("\n------------------------\n");
			printf("\nGera e mostra matriz\n");
			float matriz[lin][col];
			geraMatriz(matriz);
			mostraMatriz(matriz);
			system("pause");
			break;
		}
		case 3:
			printf("\n------------------------\n");
			printf("\nO programa sera encerrado.\n");
			sair = 3;
			break;
		default: printf("\n------------------------\n");
			printf("\nNenhuma opcao valida.\n");
			system("pause");
			break;
		}
	}
	return 0;
}