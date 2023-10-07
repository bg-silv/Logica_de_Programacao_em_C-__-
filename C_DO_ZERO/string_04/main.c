#include <stdio.h>     // Inclui a biblioteca padrão de entrada e saída.
#include <string.h>    // Inclui a biblioteca de manipulação de strings.
#include <locale.h>    // Inclui a biblioteca para configurar a localização (neste caso, para impressão em português).

#define N 50            // Define uma constante N com o valor 50.

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para Português.

    char s[N];                        // Declara uma string s com tamanho máximo N (50).
    int i;                            // Declara uma variável inteira i.

    printf("Digite um texto:\n");     // Solicita ao usuário que digite um texto.
    gets(s);                          // Lê o texto fornecido pelo usuário e armazena em s.

    i = strlen(s);                    // Calcula o tamanho do texto lido e armazena em i.
    printf("\nTamanho do texto: %d\n\n", i); // Imprime o tamanho do texto.

    printf("Impressão de posição a posição:\n"); // Imprime uma mensagem para indicar a impressão caractere por caractere.

    for (i = 0; i < strlen(s); i++) {  // Loop para imprimir o texto caractere por caractere.
        printf("%c", s[i]);           // Imprime o caractere atual.
    }

    return 0;                         // Retorna 0 para indicar que o programa foi executado com sucesso.
}
