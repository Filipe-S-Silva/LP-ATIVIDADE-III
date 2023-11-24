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
    int i, j;
    char nome[5][200];
    int idade[5];
    float nota[5][3];
    float media[5];
    float soma = 0;
    char resultado[200];

    // usario

    for (i = 0; i < 5; i++)
    {
        printf("Informe o nome do %dº aluno: ", i + 1);
        gets(nome[i]);

        printf("Informe a idade do aluno: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            do
            {
                printf("Informe a %dº nota: ", j + 1);
                scanf("%f", &nota[i][j]);

                if (nota[i][j] >= 0 && nota[i][j] <= 10)
                {
                    soma += nota[i][j];
                }

            } while (nota[i][j] > 10 || nota[i][j] < 0);
        }
        media[i] = soma / (float)j;
        soma = 0;

        printf("\n");
        fflush(stdin);
    }

    // limpatela

    system("cls || clear");

    // mostrar

    for (i = 0; i < 5; i++)
    {
        printf("Nome do %dº aluno: %s \n", i + 1, nome[i]);
        printf("Idade: %d \n", idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%dº nota: %.2f\n", j + 1, nota[i][j]);
        }

        printf("Média: %.2f \n", media[i]);

        // validação resultado
        {
            if (media[i] >= 7)
            {
                strcpy(resultado, "APROVADO");
            }
            else if (media[i] >= 5)
            {
                strcpy(resultado, "RECUPERAÇÃO");
            }
            else
            {
                strcpy(resultado, "REPROVADO");
            }
        }
        printf("Resultado final do aluno: %s\n", resultado);
        printf("\n");
    }

    getchar();
    return 0;
}