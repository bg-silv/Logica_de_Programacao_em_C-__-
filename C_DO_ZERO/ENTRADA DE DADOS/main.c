#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    int ano = 1905;
    printf("Valor inicial da idade: %d.\n",idade);

    printf("Digite uma idade: \n");
    scanf("%d",&idade);

    printf("Digite um ano: \n");
    scanf("%d",&ano);

    printf("A nova idade e: %d ano: %d\n",idade,ano );
    return 0;
}
