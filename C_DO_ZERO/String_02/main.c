#include <stdio.h>     // Inclui a biblioteca padrão de entrada e saída.
#include <string.h>    // Inclui a biblioteca de manipulação de strings.
#include <locale.h>    // Inclui a biblioteca para configurar a localização (neste caso, para impressão em português).

#define N 20            // Define uma constante N com o valor 20.

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para Português.

    char origem[N] = {"Olá, mundo!"}; // Declara e inicializa a string origem com "Olá, mundo!".
    char destino[N];                  // Declara a string destino.

    printf("Antes do strcpy:\n");    // Imprime uma mensagem antes de usar strcpy.
    puts(origem);                     // Imprime o conteúdo da string origem.
    puts(destino);                    // Imprime o conteúdo da string destino (não inicializada, pode conter lixo).

    strcpy(destino, origem);          // Copia o conteúdo da string origem para a string destino.

    printf("Depois do strcpy:\n");    // Imprime uma mensagem depois de usar strcpy.
    puts(origem);                     // Imprime o conteúdo da string origem.
    puts(destino);                    // Imprime o conteúdo da string destino após a cópia.

    return 0;                         // Retorna 0 para indicar que o programa foi executado com sucesso.
}
