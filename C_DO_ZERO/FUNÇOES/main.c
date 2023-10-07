#include <stdio.h>    // Inclui a biblioteca padrão de entrada e saída.
#include <stdlib.h>   // Inclui a biblioteca padrão para funções como 'exit'.

// Função para encontrar o maior entre dois números.
float maior(float num1, float num2) {
  if (num1 > num2)
    return num1;  // Retorna num1 se for maior.
  else
    return num2;  // Retorna num2 se for maior ou igual.
}

int main() {
   float x, y, m;  // Declaração de variáveis para armazenar os números e o resultado.

   // Solicita ao usuário que insira um valor.
   printf("Insira um valor: \n");
   scanf("%f", &x);  // Lê o valor inserido pelo usuário e armazena em 'x'.

   // Solicita ao usuário que insira mais um valor.
   printf("Insira mais um valor: \n");
   scanf("%f", &y);  // Lê o valor inserido pelo usuário e armazena em 'y'.

   // Chama a função 'maior' para encontrar o maior valor entre 'x' e 'y' e armazena em 'm'.
   m = maior(x, y);

   // Exibe o maior valor encontrado na tela com duas casas decimais.
   printf("Maior: %.2f\n", m);

   return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso.
}
