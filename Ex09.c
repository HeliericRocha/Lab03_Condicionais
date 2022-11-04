#include <stdio.h>
#include <math.h>

int main()
{
    float X, Y;
    printf("Digite o salario de um trabalhador e o valor da prestacao de um emprestimo:");

    scanf("%f%f",&X,&Y);

    if( Y > (X*0.2))
        printf("Emprestimo nao concedido");

    else

        printf("Emprestimo concedido");



    return 0;
}
