#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    char nome[100];
    printf("Digite seu nome: ");
     scanf("%s", nome);

    for( i = 0; nome[i]!= '\0'; i++){
        printf("%c\n", nome[i]);
    }
    return 0;
}
