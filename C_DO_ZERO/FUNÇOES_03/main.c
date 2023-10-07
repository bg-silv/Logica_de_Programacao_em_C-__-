#include <stdio.h>
#include <stdlib.h>

// Função para imprimir uma matriz 'm' de tamanho n x 4.
void imprime(int m[][4], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);  // Imprime um número da matriz e adiciona um espaço em branco.
        }
        printf("\n");  // Move para a próxima linha após imprimir uma linha da matriz.
    }
}

int main() {
    int mat[3][4] = {{1, 2, 3, 4},
                     {50, 60, 70, 80},
                     {91, 101, 111, 121}};

    imprime(mat, 3);  // Chama a função 'imprime' para exibir a matriz.

    return 0;
}
