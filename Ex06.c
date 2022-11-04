#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z, w;
    printf("Digite dois numeros inteiros:");
    scanf("%d%d",&x, &y);
    w = y - x ;
    z = x - y ;
    if (x>y)
        {

        printf("O primeiro numero é maior %d", x);

        printf(" E a diferenca entre eles e: %d", z);
    }
    else
        {
        printf("O numero %d e maior  \n", y);

        printf("E a diferenca entre eles e: %d", w);
    }


    return 0;
}
