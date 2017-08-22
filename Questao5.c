#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define maxString 51

typedef struct {
	char nome[maxString];
	char estilo[maxString];
	int numItegrantes;
	int favoritas;
}bandas;

bandas banda[100];   // Permite ao usuario cadastrar até 99 bandas.
static int cont = 0; // Contador utilizado para saber quantas bandas foram cadastradas até o momento.


void cadastro()
{
	printf("----------CADASTRO----------\n\n");
	while( cont < 5){
		printf("Nome: ");
		 scanf("%s", banda[cont].nome);
		printf("Estilo musical: ");
		 scanf("%s", banda[cont].estilo);
		printf("Integrantes: ");
		 scanf("%d", &banda[cont].numItegrantes);
		printf("Ranking das Favoritas: ");
		 scanf("%d", &banda[cont].favoritas);
		cont++;
		printf("\n");
	}
}

void pesquisaPosicao()
{
	printf("----PESSQUISAR FAVORITA------\n\n");
	int n, i;
	printf("Digite a posicao da musica que vc gostaria de procurar: ");
	 scanf("%d*%c", &n);
	 
	for( i = 0; i < cont; i++){
		if( n == banda[i].favoritas){
			printf("\nNome: %s\n", banda[i].nome);	
			printf("Estilo musical: %s\n", banda[i].estilo);
			printf("Integrantes: %d\n", banda[i].numItegrantes);
			printf("Ranking das Favoritas: %d\n", banda[i].favoritas);
			printf("\n\n");
		}
	}
}

void pesquisaEstilo()
{
	printf("\n----PESSQUISAR ESTILO---------\n\n");
	int i;
	char style[maxString];
	printf("Digite o estilo que vc gostaria de procurar: ");
	 scanf("%s", style);
	
	for( i = 0; i < cont; i++){
		if( strcmp( style, banda[i].estilo) == 0){
			printf("\nNome: %s\n", banda[i].nome);	
			printf("Estilo musical: %s\n", banda[i].estilo);
			printf("Integrantes: %d\n", banda[i].numItegrantes);
			printf("Ranking das Favoritas: %d\n", banda[i].favoritas);
			printf("\n\n");
		}
	}	
}


void pesquisaBanda()
{
	printf("----PESSQUISAR BANDA-----------\n\n");
	int i, k = 0 ;
	char style[maxString];
	printf("Digite a banda que vc gostaria de procurar: ");
	 scanf("%s", style);
	
	for( i = 0; i < cont; i++){
		if( strcmp( style, banda[i].nome) == 0){
			k = 1;
			printf("\nA banda esta entre suas favoritas, ocupando a %d posicao.\n\n", banda[i].favoritas);
		}
	}
	if(!k){
		printf("\nA banda nao esta entre suas favoritas.\n\n");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cadastro();
	pesquisaPosicao();
	pesquisaEstilo();
	pesquisaBanda();
	system("PAUSE");
	return 0;
}