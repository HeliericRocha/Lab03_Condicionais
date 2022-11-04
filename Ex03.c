#include <stdio.h>
#include <math.h>

int main()
{
    float X ,Y ,Z;
    printf("Digite um numero:");
    scanf("%f",&X);

    if (X>0)
    {
        Y = sqrt(X);
        printf("Sua raiz quadrada e %f:",Y);
    }
    else
    {
        Z = X*X;
        printf("seu quadrado e igual a %f:",Z);
    }

    return 0;
}
