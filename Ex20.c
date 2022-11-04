#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float A, B, C;
   printf("Digite tres valores:");
   scanf("%f%f%f",&A ,&B ,&C);

   if(A>B+C || B>A+C || C>A+B)
   printf("Triangulo nao existe");

   if(A==B&&B==C)
    printf("O triangulo e equilatero");
    else
        printf("O triangulo e escaleno");

   if(A==B||B==C||C==A)
    printf("O triangulo e isosceles");

 return 0;
}
