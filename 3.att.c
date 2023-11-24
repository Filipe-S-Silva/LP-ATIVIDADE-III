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
    int posicao = 0;
    int codigo = 0;
    char nome[999][200];
    char telefone[999][200];

    // usario

    do
    {
        printf("ADICIONAR NÚMERO -------- 1\n");
        printf("  PARA SAIR ------------- 2\n");
        printf("\n");

        printf("Informe o código: ");
        scanf("%d", &codigo);

        fflush(stdin);

        switch (codigo)
        {
        case 1:


            printf("Informe o nome: ");
            gets(nome[posicao]);

            printf("Informe o telefone: ");
            gets(telefone[posicao]);

            printf("\n");

            posicao++;
            break;

        case 2:

            printf("SAINDO\n");
            sleep(1);
            printf("Exibindo a lista\n");
            sleep(1);
            system("cls || clear");
            break;

        default:

            printf("Opção inválida");
            break;
        }

        fflush(stdin);

    } while (codigo != 2);

    // mostrar

    for (i = 0; i < posicao; i++)
    {
        printf("Nome: %s\n", nome[i]);
        printf("Telefone: %s\n", telefone[i]);
        printf("\n");
    }

    getchar();
    return 0;
}