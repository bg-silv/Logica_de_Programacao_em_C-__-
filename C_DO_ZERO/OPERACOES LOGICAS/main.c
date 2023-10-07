#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m;
    printf("Informe a nota:\n");
    scanf("%f",&m);

    if(m >= 4.0 && m < 7.0){
        printf("Tem direito a exame\n");
    }


    return 0;
}
