#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X;
    float Loga;

    printf("Escreva um numero inteiro:");
    scanf("%d",&X);
    if(X>0)
    {
       Loga = log10(X);
       printf("O logaritmo deste numero e: %f", Loga);
    }
    else
        printf("Numero invalido");
    return 0;
}
