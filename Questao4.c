#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[30];

}tAluno

tAluno gAlunos[100];
static int i=0;

unsigned int consultaAlunosPorCurso(char *curso)
{


    for()

    return
}

int main(void)
{
    int Alunos;
    char opcao;
    char *CURSO;

    Alunos = consultaAlunosPorCurso(gAlunos);

    printf("O QUE VOCE DESEJA FAZER ?\n"
            "1 - Cadastrar Aluno\n"
            "2 - Procurar Aluno por curso\n"
            "3 - Quantidade de Alunos Cadastrados por Curso\n"
            "4 - Total de Alunos Cadastrados\n"
            "5 - Encerrar Programa\n");

    scanf("%c", &opcao);

    switch(opcao){
        case '1':
            printf("NOME DO ALUNO > ");
            scanf("%s", gAluno[i].nome);
            printf("ENDERECO > ");
            scanf("%s", gAluno[i].endereco);
            printf("MATRICULA > ");
            scanf("%s", gAluno[i].matricula);
            printf("CURSO > ");
            scanf("%s", gAluno[i].curso);
            i++;
        case '2':
            printf("Digite o CURSO > ");
            scanf("%s", CURSO);
            consultaAlunosPorCurso(CURSO);


}
