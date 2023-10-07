#include <stdio.h>     // Inclui a biblioteca padr�o de entrada e sa�da.
#include <string.h>    // Inclui a biblioteca de manipula��o de strings.
#include <locale.h>    // Inclui a biblioteca para configurar a localiza��o (neste caso, para impress�o em portugu�s).

#define N 50            // Define uma constante N com o valor 50.

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para Portugu�s.

    char s[N];                        // Declara uma string s com tamanho m�ximo N (50).
    int i;                            // Declara uma vari�vel inteira i.

    printf("Digite um texto:\n");     // Solicita ao usu�rio que digite um texto.
    gets(s);                          // L� o texto fornecido pelo usu�rio e armazena em s.

    i = strlen(s);                    // Calcula o tamanho do texto lido e armazena em i.
    printf("\nTamanho do texto: %d\n\n", i); // Imprime o tamanho do texto.

    printf("Impress�o de posi��o a posi��o:\n"); // Imprime uma mensagem para indicar a impress�o caractere por caractere.

    for (i = 0; i < strlen(s); i++) {  // Loop para imprimir o texto caractere por caractere.
        printf("%c", s[i]);           // Imprime o caractere atual.
    }

    return 0;                         // Retorna 0 para indicar que o programa foi executado com sucesso.
}
