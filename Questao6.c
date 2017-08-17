#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
     int jogador;
     int votos;
}jogadores;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    jogadores j[23];


    int n, i = 1;
    int votos = 0, votosT = 0, votosM = -1;
    int jogadorM;
    double porcentagemM, porcentagem;

    for( n = 0; n < 23; n++)
        j[n].votos = 0;

    printf("Enquete: Quem foi o melhor jogador?\n\n");

    while( i != 0){
        printf("Número do jogador (0 = fim): ");
         scanf("%d", &i);

        if( i < 0 || i > 23){
            printf("Informe um valor entre 1 e 23 ou 0 para sair!\n");
        }
        else{
            if(i != 0 ){
                votosT ++;
                j[i-1].jogador = i;
                j[i-1].votos++;
            }
        }
    }

    printf("\nForam computados %d votos.\n\n", votosT);
    printf("Jogador\tVotos\t%\n");
    for(n = 0; n < 23; n++){
        if( j[n].votos > 0){
            porcentagem = (j[n].votos * 100)/ votosT;
            printf("%d\t%d\t%.2lf\n", j[n].jogador, j[n].votos, porcentagem);
            if( votosM < votos){
                jogadorM = j[n].jogador;
                votosM = j[n].votos;
                porcentagemM = porcentagem;
            }

        }
    }
    printf("\n\n");
    printf("O melhor jogador foi o número %d, com %d votos, correspondente a %.lf%% do total de votos.\n", jogadorM, votosM, porcentagemM);
    return 0;
}
