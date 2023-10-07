#include <stdio.h>     // Inclui a biblioteca padr�o de entrada e sa�da.
#include <string.h>    // Inclui a biblioteca de manipula��o de strings.
#include <locale.h>    // Inclui a biblioteca para configurar a localiza��o (neste caso, para impress�o em portugu�s).

#define N 20            // Define uma constante N com o valor 20.

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para Portugu�s.

    char origem[N] = {"Ol�, mundo!"}; // Declara e inicializa a string origem com "Ol�, mundo!".
    char destino[N];                  // Declara a string destino.

    printf("Antes do strcpy:\n");    // Imprime uma mensagem antes de usar strcpy.
    puts(origem);                     // Imprime o conte�do da string origem.
    puts(destino);                    // Imprime o conte�do da string destino (n�o inicializada, pode conter lixo).

    strcpy(destino, origem);          // Copia o conte�do da string origem para a string destino.

    printf("Depois do strcpy:\n");    // Imprime uma mensagem depois de usar strcpy.
    puts(origem);                     // Imprime o conte�do da string origem.
    puts(destino);                    // Imprime o conte�do da string destino ap�s a c�pia.

    return 0;                         // Retorna 0 para indicar que o programa foi executado com sucesso.
}
