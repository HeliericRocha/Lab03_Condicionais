#include <stdio.h>
#include <math.h>

int main()
{
    float X, Y, Z;
    printf("Digite um numero:");
    scanf("%f",&X);

    if (X>0)
    {
        Y = X*X;
        Z = sqrt(X);
        printf("O numero ao quadrado e:%f\nA raiz quadrada do numero e: %f",Y,Z);
    }

    return 0;
}
