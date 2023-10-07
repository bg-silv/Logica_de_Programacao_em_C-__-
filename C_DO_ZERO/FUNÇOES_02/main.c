#include <stdio.h>   // Inclui a biblioteca padr�o de entrada e sa�da.
#include <stdlib.h>  // Inclui a biblioteca padr�o para fun��es como 'exit'.

// Fun��o para imprimir um vetor 'v' de tamanho 'n'.
void imprime1(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", v[i]);  // Imprime um elemento do vetor.
    }
}

// Fun��o para imprimir um vetor 'v' de tamanho fixo 5.
void imprime2(int v[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d", v[i]);  // Imprime um elemento do vetor.
    }
}

// Fun��o para imprimir um vetor de ponteiros 'v' de tamanho 'n'.
void imprime3(int *v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", v[i]);  // Imprime um elemento do vetor de ponteiros.
    }
}

int main() {
    int vet[5] = {1, 2, 3, 4, 5};  // Declara e inicializa um vetor de inteiros com 5 elementos.

    puts("Primeiro imprime:");
    imprime1(vet, 5);  // Chama a fun��o 'imprime1' para imprimir o vetor 'vet
