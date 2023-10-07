#include <stdio.h>     // Inclui a biblioteca padrão de entrada e saída.
#include <string.h>    // Inclui a biblioteca de manipulação de strings.
#include <locale.h>    // Inclui a biblioteca para configurar a localização (neste caso, para impressão em português).

#define N 50            // Define uma constante N com o valor 50.

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para Português.

    char hardText[N] = {"/exit"};      // Declara e inicializa uma string hardText com o valor "/exit".
    char senha_usr[N];                 // Declara uma string senha_usr.
    int ok;                            // Declara uma variável inteira ok.

    printf("Digite um texto:\n");     // Solicita ao usuário que digite um texto.
    gets(senha_usr);                   // Lê o texto fornecido pelo usuário e armazena em senha_usr.

    ok = strcmp(hardText, senha_usr);  // Compara as duas strings hardText e senha_usr usando a função strcmp.

    if (ok == 0)
        printf("Textos iguais.\n");   // Se as strings forem iguais, imprime "Textos iguais."
    else
        printf("Textos diferentes.\n");// Se as strings forem diferentes, imprime "Textos diferentes."

    return 0;                          // Retorna 0 para indicar que o programa foi executado com sucesso.
}
