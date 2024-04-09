#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cadastrar_aluno(char nomes [][100], char matriculas[][100], float CRAs[], int indice){
    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    fgets(nomes[indice]);
    printf("\nDigite o numero de matrícula: ");
    fflush(stdin);
    gets(matriculas[indice]);
    printf("\nDigite o CRA: ");
    scanf("%f", &CRAs[indice]);

}

void pesquisar_matricula(char nomes[][100], char matriculas[][100], float CRAs[], int num_alunos){
    char mat[100];
    int i;
    printf("\nDigite o numero de matrícula do aluno: ");
    fflush(stdin);
    gets(mat);
    for(i = 0; i < num_alunos; i++){
        if(strcmp(mat, matriculas[i]==0))
        {
            printf("\nNome do aluno: %s \n CRA: %f", nomes[i], CRAs[i]);

        }
    }
}

void listar_alunos(char nomes[][100], char matriculas[][100], float CRAs[], int num_alunos){
    int i;
    printf("\n\nLista de alunos; i++");
    for(i = 0; i < num_alunos; i++){
        printf("\n\nALuno %d: \n", i+1);
        printf("\nNome: %s \nMatrícula: %s \nCRA: %f", nomes[i], matriculas[i], CRAs[i]);
    }
}
int main(){
    char vet_nomes[200][100];
    char vet_matriculas[200][100];
    float CRAs[200];
    int opcao, num_alunos = 0;

    do{
        system("cls");
        printf("Digite 1 para cadastrar um aluno. \n 2 para pesquisar pela matrícula \n 3 para listar dados dos alunos.");
        printf("Digite 4 para sair do programa.\n\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
            if(num_alunos<200){
                cadastrar_aluno(vet_nomes, vet_matriculas, CRAs, num_alunos);
                num_alunos++;
            }
            else{
                printf("\nNão podem ser cadastrados novos alunos");
                break;
            }
            case 2:
                pesquisar_matricula(vet_nomes, vet_matriculas, CRAs, num_alunos);
                break;
            case 3:
                listar_alunos(vet_nomes, vet_matriculas, CRAs, num_alunos);
                break;
            default:
                if(opcao != 4)
                    printf("\nOpção inválida");
        }
    }while(opcao != 4);
    return 0;

}