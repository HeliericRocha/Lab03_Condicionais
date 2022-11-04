#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float x, y, z, med;
   printf("Digite, respectivamente, a nota do Trabalho, da Avaliacao, e do Exame:");
   scanf("%f%f%f", &x, &y, &z);

    med = ((x*2)+(y*3)+(z*5))/10;

    if(x <0 || x>10 || y <0 || y>10 || z <0 || z>10 )
    {
       printf("Nota invalida");
    }
    else
    {
        if(med >=0 && med<= 2.9){
            printf("Aluno reprovado");
        }
        if(med >2.9 && med<= 4.9){
            printf("Aluno em recuperacao");
        }
        if (med >4.9 && med<=10.0){
            printf("Aluno aprovado");
        }
    }


    return 0;
}
