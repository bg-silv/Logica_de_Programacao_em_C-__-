#include <stdio.h>      // Inclui o cabe�alho padr�o para entrada e sa�da.
#include <stdlib.h>     // Inclui o cabe�alho padr�o para fun��es de aloca��o de mem�ria.
#include "teste1.h"     // Inclui o seu arquivo de cabe�alho "teste1.h", que deve conter declara��es de fun��es.

int main() {
    printf("%d \n", soma(10, 10));    // Chama a fun��o 'soma' e imprime o resultado.
    printf("%d \n", Sub(10, 10));     // Chama a fun��o 'Sub' e imprime o resultado.
    printf("%d \n", Mult(10, 10));    // Chama a fun��o 'Mult' e imprime o resultado.
    printf("\033[1;34mTexto Azul\033[0m\n");    // Azul
}
