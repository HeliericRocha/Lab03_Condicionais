#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite duas notas de um aluno: ");
    scanf("%f%f",&nota1,&nota2);

     if(0 < nota1&& nota1 < 10 && 0 < nota2 && nota2 < 10 )
     {
         media = (nota1+ nota2)/2;
         printf("A media entre as duas notas e: %f", media);
     }
     else {
            printf("Nota invalida");
     }

    return 0;
}
