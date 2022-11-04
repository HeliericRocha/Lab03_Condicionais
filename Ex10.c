#include <stdio.h>
#include <math.h>

int main()
{
    float A, P;
    char S;

        printf("Digite a altura de uma pessoa:");
        scanf("%f", &A);

        printf("Agora digite seu sexo(H para homem e M para mulher):");
        scanf(" %c", &S);
        if('S' == 'M' )
        {
          P = (A*62.1)-44.7;
        }
        else
        {
          P = (A*72.7)- 58;
        }
          printf("O peso ideal para esta pessoa e:%f", P);

    return 0;
}
