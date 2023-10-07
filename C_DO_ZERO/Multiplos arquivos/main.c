#include <stdio.h>      // Inclui o cabeçalho padrão para entrada e saída.
#include <stdlib.h>     // Inclui o cabeçalho padrão para funções de alocação de memória.
#include "teste1.h"     // Inclui o seu arquivo de cabeçalho "teste1.h", que deve conter declarações de funções.

int main() {
    printf("%d \n", soma(10, 10));    // Chama a função 'soma' e imprime o resultado.
    printf("%d \n", Sub(10, 10));     // Chama a função 'Sub' e imprime o resultado.
    printf("%d \n", Mult(10, 10));    // Chama a função 'Mult' e imprime o resultado.
    printf("\033[1;34mTexto Azul\033[0m\n");    // Azul
}
