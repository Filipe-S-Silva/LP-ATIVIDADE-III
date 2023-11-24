#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

int main()
{

    // variaveis
    setlocale(LC_ALL, "portuguse");
    int i;

    char nome[2][200];
    int idade[2];
    float peso[2];
    float altura[2];

    float maisAlto = 0;
    float maisBaixo = 999999;

    float maiorpeso = 0;
    float menorpeso = 99999;

    int maisIdade = 0;
    int menosIdade = 999999;

    int posicaoAlturaMaior;
    int posicaoAlturaMenor;

    int posicaoPesoMaior;
    int posicaoPesoMenor;

    int posicaoIdadeMaior;
    int posicaoIdadeMenor;

    // usuario

    for (i = 0; i < 2; i++)
    {
        printf("Dados da %dº pessoa: \n", i + 1);
        printf("\n");

        printf("Informe o seu nome: ");
        gets(nome[i]);

        fflush(stdin);

        printf("Informe sua idade: ");
        scanf("%d", &idade[i]);

        printf("Informe seu peso: ");
        scanf("%f", &peso[i]);

        fflush(stdin);

        printf("Informe sua altura: ");
        scanf("%f", &altura[i]);

        maisAlto = maisAlto > altura[i] ? maisAlto : altura[i];
        maisBaixo = maisBaixo < altura[i] ? maisBaixo : altura[i];

        if (maisAlto = altura[i])
        {
            posicaoAlturaMaior = i;
        }
        else
        {
            posicaoAlturaMenor = i;
        }

        maiorpeso = maiorpeso > peso[i] ? maiorpeso : peso[i];
        menorpeso = menorpeso < peso[i] ? menorpeso : peso[i];

        if (maiorpeso = peso[i])
        {
            posicaoPesoMaior = i;
        }
        else
        {
            posicaoPesoMenor = i;
        }

        maisIdade = maisIdade > idade[i] ? maisIdade : idade[i];
        menosIdade = menosIdade < idade[i] ? menosIdade : idade[i];

        if (maisIdade = idade[i])
        {
            posicaoIdadeMaior = i;
        }
        else
        {
            posicaoIdadeMenor = i;
        }

        fflush(stdin);
    }

    // limpatela
    {
        system("cls || clear");
    }
    // mostrar

    for (i = 0; i < 2; i++)
    {
        printf("Dados da %dº pessoa: \n", i + 1);
        printf("\n");
        printf("Nome: %s\n", nome[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Peso: %.2f kg\n", peso[i]);
        printf("Altura: %.2f m\n", altura[i]);
        printf("\n");
    }

    printf("Nome da pessoa da pessoa mais alta: %s\n", nome[posicaoAlturaMaior]);
    printf("Sua altura: %.2f m \n", maisAlto);
    printf("Nome da pessoa da pessoa mais baixa: %s\n", nome[posicaoAlturaMenor]);
    printf("Sua altura: %.2f m \n ", maisBaixo);
    printf("\n");

    printf("Nome da pessoa com maior peso: %s\n", nome[posicaoPesoMaior]);
    printf("Seu peso: %.2f \n", maiorpeso);
    printf("Nome da pessoa com menor peso: %s\n", nome[posicaoPesoMenor]);
    printf("Seu peso: %.2f \n", menorpeso);
    printf("\n");

    printf("Nome pessoa com maior idade: %s\n", nome[posicaoIdadeMaior]);
    printf("Sua idade: %d \n", maisIdade);
    printf("Nome pessoa com menor idade: %s\n", nome[posicaoIdadeMenor]);
    printf("Sua idade: %d \n", menosIdade);
    printf("\n");

    getchar();
    return 0;
}