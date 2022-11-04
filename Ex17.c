#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, h, a;

    printf("Digite a base maior de um trapezio:");
    scanf("%f",&x);

    printf("Agora digite a base menor:");
    scanf("%f",&y);

    printf("Agora digite a altura:");
    scanf("%f",&h);

    if(x>0 && y>0){

        a = ((x+y)*h)/2;

        printf("A area do trapezio e igual a: %f", a);
    }
    else
        printf("A base maior e a base menor tem que ser maiores que 0");

    return 0;
}
