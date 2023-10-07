#include <stdio.h>
#include <stdlib.h>

// Fun��o para imprimir uma matriz 'm' de tamanho n x 4.
void imprime(int m[][4], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);  // Imprime um n�mero da matriz e adiciona um espa�o em branco.
        }
        printf("\n");  // Move para a pr�xima linha ap�s imprimir uma linha da matriz.
    }
}

int main() {
    int mat[3][4] = {{1, 2, 3, 4},
                     {50, 60, 70, 80},
                     {91, 101, 111, 121}};

    imprime(mat, 3);  // Chama a fun��o 'imprime' para exibir a matriz.

    return 0;
}
