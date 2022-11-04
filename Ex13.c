#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float x, y, z, med;

    printf("Digite as 3 notas:");
    scanf("%f%f%f",&x,&y,&z);

    med = (x+y+(z*2))/4;
    printf("A media do estudante foi de: %f \n", med);

        if(med>=60){
           printf("Aluno foi aprovado");
        }
        else {
            printf("Aluno foi reprovado");
        }


    return 0;
}
