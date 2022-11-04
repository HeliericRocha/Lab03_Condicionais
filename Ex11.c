#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,soma=0;

    printf("Escreva um numero inteiro maior do que 0:");
    scanf("%d",&X);
    if (X>0)
    {
      while(X>0){
        soma=soma+X%10;
        X=X/10;
      }
      printf("A soma dos algarismos e: %d",soma);
    }
    else{
        printf("O numero e invalido");
    }

    return 0;
}
