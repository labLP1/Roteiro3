#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(void)
{
    char string[50];

    puts("ESTE PROGRAMA RETORNA SE A PALAVRA É PALÍNDROMA");
    printf("Escreva a palavra > ");
    scanf("%s", string);

    int j = strlen(string) - 1 ,i;

    for(i=0;i < strlen(string);i++){
        if(string[i] == string[j]){
            printf("%c = %c\n", string[i], string[j]);
        }
        j--;
    }

    return 0;
}
