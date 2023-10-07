#include <stdio.h>    // Inclui a biblioteca padr�o de entrada e sa�da.
#include <stdlib.h>   // Inclui a biblioteca padr�o para fun��es como 'exit'.

// Fun��o para encontrar o maior entre dois n�meros.
float maior(float num1, float num2) {
  if (num1 > num2)
    return num1;  // Retorna num1 se for maior.
  else
    return num2;  // Retorna num2 se for maior ou igual.
}

int main() {
   float x, y, m;  // Declara��o de vari�veis para armazenar os n�meros e o resultado.

   // Solicita ao usu�rio que insira um valor.
   printf("Insira um valor: \n");
   scanf("%f", &x);  // L� o valor inserido pelo usu�rio e armazena em 'x'.

   // Solicita ao usu�rio que insira mais um valor.
   printf("Insira mais um valor: \n");
   scanf("%f", &y);  // L� o valor inserido pelo usu�rio e armazena em 'y'.

   // Chama a fun��o 'maior' para encontrar o maior valor entre 'x' e 'y' e armazena em 'm'.
   m = maior(x, y);

   // Exibe o maior valor encontrado na tela com duas casas decimais.
   printf("Maior: %.2f\n", m);

   return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso.
}
