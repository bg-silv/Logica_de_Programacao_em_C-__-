#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M;
    printf("Informe um dia da semana:\n");
    scanf("%d",&M);

    switch(M){
case 1:
    printf("Domingo");
    break;
case 2:
    printf("Segunda");
    break;
case 3:
    printf("Terça");
    break;
case 4:
    printf("Quarta");
    break;
case 5:
    printf("Quinta");
    break;
case 6:
    printf("Sexta");
    break;
case 7:
    printf("Sabado");
    break;
default: printf("Numero Incorreto");
    break;
    }




    return 0;
}
