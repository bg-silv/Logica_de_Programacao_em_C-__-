#include <stdio.h>     // Inclui a biblioteca padr�o de entrada e sa�da.
#include <string.h>    // Inclui a biblioteca de manipula��o de strings.
#include <locale.h>    // Inclui a biblioteca para configurar a localiza��o (neste caso, para impress�o em portugu�s).

#define N 50            // Define uma constante N com o valor 50.

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para Portugu�s.

    char s1[N] = "Logica de ";        // Declara e inicializa a string s1 com "Logica de ".
    char s2[N] = "Programa��o!";      // Declara e inicializa a string s2 com "Programa��o!".

    printf("Antes do strcat:\n");    // Imprime uma mensagem antes de usar strcat.
    printf("str1: %s\n", s1);        // Imprime o conte�do da string s1.
    printf("str2: %s\n", s2);        // Imprime o conte�do da string s2.

    strcat(s1, s2);                   // Concatena s2 ao final de s1.

    printf("Depois do strcat:\n");    // Imprime uma mensagem depois de usar strcat.
    puts(s1);                         // Imprime o conte�do da string s1 usando a fun��o puts.

    return 0;                         // Retorna 0 para indicar que o programa foi executado com sucesso.
}
