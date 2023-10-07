#include <stdio.h>     // Inclui a biblioteca padrão de entrada e saída.
#include <string.h>    // Inclui a biblioteca de manipulação de strings.
#include <locale.h>    // Inclui a biblioteca para configurar a localização (neste caso, para impressão em português).

#define N 50            // Define uma constante N com o valor 50.

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para Português.

    char s1[N] = "Logica de ";        // Declara e inicializa a string s1 com "Logica de ".
    char s2[N] = "Programação!";      // Declara e inicializa a string s2 com "Programação!".

    printf("Antes do strcat:\n");    // Imprime uma mensagem antes de usar strcat.
    printf("str1: %s\n", s1);        // Imprime o conteúdo da string s1.
    printf("str2: %s\n", s2);        // Imprime o conteúdo da string s2.

    strcat(s1, s2);                   // Concatena s2 ao final de s1.

    printf("Depois do strcat:\n");    // Imprime uma mensagem depois de usar strcat.
    puts(s1);                         // Imprime o conteúdo da string s1 usando a função puts.

    return 0;                         // Retorna 0 para indicar que o programa foi executado com sucesso.
}
