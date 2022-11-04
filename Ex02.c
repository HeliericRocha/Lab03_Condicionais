#include <stdio.h>
#include <math.h>

int main()
{
    float X ,Y;
    printf("Digite um numero:");
    scanf("%f",&X);

    if (X>0)
    {
        Y = sqrt(X);
        printf("Sua raiz quadrada e %.2f:",Y);
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}
