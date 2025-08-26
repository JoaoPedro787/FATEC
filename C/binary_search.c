#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pesquisa binária

    int arr[1000], chute, meio, total = 0;

    int baixo = 0, alto = 999;


    for(int i=0; i<1000; i++)
    {
        arr[i]= i + 1;
    };

    printf("Chute:");
    scanf("%d", &chute);

    while(baixo <= alto)
    {
        total = total + 1;
        meio = (baixo + alto) / 2;

        printf("\n");
        printf("Meio: %d \n", meio);
        printf("Alto: %d \n", alto);
        printf("Baixo: %d \n", baixo);

        if(chute > arr[meio])
        {
            baixo = meio + 1;
        }
        else if(chute < arr[meio])
        {
            alto = meio - 1;
        }
        else
        {
            break;
        };
    };

    printf("\n");

    if(baixo > alto)
    {
        printf("Valor nn encontrado no array");
    }
    else
    {
        printf("\n");
        printf("index : %d \n", meio);
        printf("arr[%d] = %d \n", meio, arr[meio]);
    };

    printf("Tentativas: %d", total);
    return 0;
}
