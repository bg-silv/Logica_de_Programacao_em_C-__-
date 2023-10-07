#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

// Define a estrutura tipo_pessoa fora da função main
struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localização para Português

    // Criando e inicializando uma estrutura tipo_pessoa
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Início: \n");
    printf("pes idade: %d\n", pes.idade); // Acessa a idade de pes
    printf("pes peso: %.2f\n", pes.peso); // Acessa o peso de pes
    printf("pes nome: %s\n", pes.nome);   // Acessa o nome de pes

    // Modificando os campos via código
    pes.idade = 10; // Altera a idade de pes
    pes.peso = 99.99; // Altera o peso de pes
    strcpy(pes.nome, "Texto");

    printf("Alterando os campos via código: \n");
    printf("pes idade: %d\n", pes.idade); // Acessa a idade de pes após a alteração
    printf("pes peso: %.2f\n", pes.peso); // Acessa o peso de pes após a alteração
    printf("pes nome: %s\n", pes.nome);   // Acessa o nome de pes após a alteração

    printf("\nInsira um número inteiro: \n");
    scanf("%d", &pes.idade); // Lê um número inteiro do usuário e armazena em pes.idade
    fflush(stdin); // Limpa o buffer de entrada
    printf("Insira um número real:\n");
    scanf("%f", &pes.peso); // Lê um número real do usuário e armazena em pes.peso
    fflush(stdin); // Limpa o buffer de entrada
    printf("Insira uma palavra:\n");
    scanf("%s", pes.nome); // Lê uma palavra do usuário e armazena em pes.nome

    printf("\nAlterando com dados do usuário: \n");
    printf("pes.idade: %d\n", pes.idade); // Exibe a idade atualizada de pes
    printf("pes.peso: %.2f\n", pes.peso); // Exibe o peso atualizado de pes
    printf("pes.nome: %s\n", pes.nome);   // Exibe o nome atualizado de pes

    return 0;
}
