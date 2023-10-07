#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída.
#include <string.h>  // Inclui a biblioteca para manipulação de strings.
#include <locale.h>  // Inclui a biblioteca para configurar a localização do programa.
#include <stdlib.h>  // Inclui a biblioteca padrão para funções como 'system'.

#define TAM 3         // Define uma constante TAM com o valor 3, representando o tamanho da lista.

struct tipo_pessoa {  // Define uma estrutura chamada 'tipo_pessoa' para representar informações de uma pessoa.
    int idade;
    float peso;
    char nome[50];
};

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para português.

    struct tipo_pessoa lista[TAM];    // Cria um array de estruturas 'tipo_pessoa' com tamanho TAM.
    int i;

    // Loop para inserir os dados de 'TAM' pessoas no array.
    for (i = 0; i < TAM; i++) {
        printf("Insira os dados (%d):\n", i + 1);

        printf("Nome: ");
        scanf("%s", lista[i].nome);   // Lê o nome da pessoa.

        fflush(stdin);  // Limpa o buffer do teclado para evitar problemas de entrada.

        printf("Idade: ");
        scanf("%d", &lista[i].idade);  // Lê a idade da pessoa.

        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);   // Lê o peso da pessoa.

        fflush(stdin);
    }

    system("cls");  // Limpa a tela do console.

    printf("Seus dados:\n");

    // Loop para exibir os dados das pessoas armazenadas no array.
    for (i = 0; i < TAM; i++) {
        printf("---------------- Pessoa %d ---------------\n", i + 1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("--------------------------------\n");

    return 0;
}
