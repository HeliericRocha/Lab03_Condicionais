#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    float y, w, z;

    printf("Escolha uma operacao matematica abaixo:\n");

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");

    scanf("%d",&x);

    switch(x)
    {

        case 1:
        printf("Digite dois numeros:");
        scanf("%f%f",&y,&w);
        z = y + w;
        printf("A soma dos numeros e: %f",z);
        break;

        case 2:
        printf("Digite dois numeros:");
        scanf("%f%f",&y,&w);
        z = y - w;
        printf("A subtracao dos numeros e: %f",z);
        break;

        case 3:
        printf("Digite dois numeros:");
        scanf("%f%f",&y,&w);
        z = y * w;
        printf("A multiplicacao dos numeros e: %f",z);
        break;

        case 4:
        printf("Digite dois numeros:");
        scanf("%f%f",&y,&w);
        z = y / w;
        printf("A divisao dos numeros e: %f",z);
        break;

        default:
        printf("Opcao invalida");
    }
    return 0;
}
