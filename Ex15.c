#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int x;
    printf("Digite um numero entre um e sete:");
    scanf("%d",&x);
    switch(x)
        {
        case 1:
            printf("Domingo\n"); break;
        case 2:
            printf("Segunda\n"); break;
        case 3:
            printf("Terca\n"); break;
        case 4:
            printf("Quarta\n"); break;
        case 5:
            printf("Quinta\n"); break;
        case 6:
            printf("sexta\n"); break;
        case 7:
            printf("sabado\n"); break;
        default :
            printf("Valor invalido");


        }

    return 0;
}
