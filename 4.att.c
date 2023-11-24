#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main()
{

    // variaveis
    setlocale(LC_ALL, "portuguese");
    int i;

    int numeros[5];

    int impares = 0;

    int negativos = 0;

    int maior = 0;
    int menor = 999999999;

    int pares = 0;
    int somaPar = 0;
    float mediaPar;

    int soma = 0;
    float media;

    // usario

    for (i = 0; i < 5; i++)
    {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        numeros[i] % 2 != 0 ? impares++ : pares++;

        if (numeros[i] < 0)
        {
            negativos++;
        }

        maior = maior > numeros[i] ? maior : numeros[i];
        menor = menor < numeros[i] ? menor : numeros[i];

        if (numeros[i] % 2 == 0)
        {
            somaPar += numeros[i];
        }
        
        soma += numeros[i];
    }

    mediaPar = (float)somaPar / (float)pares;

    media = soma / (float)i;

    // mostrar

    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média dos números pares: %.2f \n", mediaPar);
    printf("Média dos números inseridos: %.2f\n", media);

    getchar();
    return 0;
}