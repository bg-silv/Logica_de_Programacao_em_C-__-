#include <stdio.h>
#include <stdlib.h>

/** inicializa��o,
teste se verdadeiro,
execu��o,
teste do if se verdadeiro break para o codigo,
acrescimo ++,
**/
int main()
{
    int b;
    for(b =1; b<=8; b++){
        printf("%d \n",b);

        if(b == 6){
            break; // Encerra o loop quando b for igual a 6
        }
    }

    for(b =1; b<=10; b++){
        if(b == 75 || b == 8){
            continue; //Pula itera��es quando b for igual a 5 ou 8
        }
    printf("%d ",b);
        }

    return 0;
}




