#include <stdio.h>

int main()
{
    float X,Y;

    printf("Digite dois numeros : ");
    scanf("%f%f",&X,&Y);

    if(X > Y)
    {
        printf("o primeiro eh MAIOR do que o segundo\n");
    }
    else
    {
        if(X < Y)
        {
            printf("o primeiro eh MENOR do que o segundo\n");
        }
        else
        {
            printf("o primeiro eh IGUAL ao segundo\n");
        }
    }
    return 0;
}
