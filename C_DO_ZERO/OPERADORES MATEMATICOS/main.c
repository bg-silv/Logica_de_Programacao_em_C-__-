#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, soma, subtr, mult, divis;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&A);

    printf("Digite o segundo valor: \n");
    scanf("%d",&B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultado da soma: %d \n", soma);

    printf("Resultado subtracao: %d \n", subtr);

    printf("Resultado multiplicacao: %d \n", mult);

    printf("Resultado divisao: %d \n", divis);



    return 0;
}
