#include <stdio.h>
#include <stdlib.h>

int main()
{

int v[5] = {110, 20, 30, 40, 50};
    int i;
    float S = 0;

    for(i = 0; i < 5; i++) {
        S += v[i];
    }

    printf("Resultado: %f\n", S / 5);
    return 0;
}
