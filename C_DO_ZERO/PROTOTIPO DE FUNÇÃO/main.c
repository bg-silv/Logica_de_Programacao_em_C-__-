#include <stdio.h>

float maior(float num1, float num2); // Protótipo da função

int main() { // Deve ser "main" em vez de "principal"
    float x, y, m;

    printf("Insira um valor: \n");
    scanf("%f", &x);
    printf("Insira mais um valor:\n");
    scanf("%f", &y);

    m = maior(x, y); // Chama a função 'maior' corretamente

    printf("Maior: %.2f\n", m);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

float maior(float num1, float num2) {
    if (num1 > num2)
        return num1;
    else
        return num2; // Aqui, corrigi "númico de retorno2" para "return num2;"
}
