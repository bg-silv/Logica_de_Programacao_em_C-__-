#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;

    printf("Digite o valor de M: \n");
    scanf("%d",&m);

    do{
         printf("%d ",m);
        m++;
    }while(m <= 10);


    return 0;
}
