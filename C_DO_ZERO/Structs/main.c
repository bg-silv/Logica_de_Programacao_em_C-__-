#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

// Define a estrutura tipo_pessoa fora da fun��o main
struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localiza��o para Portugu�s

    // Criando e inicializando uma estrutura tipo_pessoa
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("In�cio: \n");
    printf("pes idade: %d\n", pes.idade); // Acessa a idade de pes
    printf("pes peso: %.2f\n", pes.peso); // Acessa o peso de pes
    printf("pes nome: %s\n", pes.nome);   // Acessa o nome de pes

    // Modificando os campos via c�digo
    pes.idade = 10; // Altera a idade de pes
    pes.peso = 99.99; // Altera o peso de pes
    strcpy(pes.nome, "Texto");

    printf("Alterando os campos via c�digo: \n");
    printf("pes idade: %d\n", pes.idade); // Acessa a idade de pes ap�s a altera��o
    printf("pes peso: %.2f\n", pes.peso); // Acessa o peso de pes ap�s a altera��o
    printf("pes nome: %s\n", pes.nome);   // Acessa o nome de pes ap�s a altera��o

    printf("\nInsira um n�mero inteiro: \n");
    scanf("%d", &pes.idade); // L� um n�mero inteiro do usu�rio e armazena em pes.idade
    fflush(stdin); // Limpa o buffer de entrada
    printf("Insira um n�mero real:\n");
    scanf("%f", &pes.peso); // L� um n�mero real do usu�rio e armazena em pes.peso
    fflush(stdin); // Limpa o buffer de entrada
    printf("Insira uma palavra:\n");
    scanf("%s", pes.nome); // L� uma palavra do usu�rio e armazena em pes.nome

    printf("\nAlterando com dados do usu�rio: \n");
    printf("pes.idade: %d\n", pes.idade); // Exibe a idade atualizada de pes
    printf("pes.peso: %.2f\n", pes.peso); // Exibe o peso atualizado de pes
    printf("pes.nome: %s\n", pes.nome);   // Exibe o nome atualizado de pes

    return 0;
}
