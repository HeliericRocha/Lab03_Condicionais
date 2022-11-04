#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("digite um numero inteiro:");
    scanf("%d",&x);

    if(x%3==0 && x%5==0)
    {
        printf("Numero invalido");
        return 0;
    }

    if(x%3==0)
    {
        printf("Numero e divisivel por 3");
    }
    if(x%5==0)
    {
        printf("Numero e divisivel por 5");
    }
    else
        printf("numero invalido");



    return 0;
}
