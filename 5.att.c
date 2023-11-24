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
    char nomeDoProduto[999][200];
    float preco[999];
    int quantidade[999];
    float valorTotal[999];

    // usario

    do
    {
        printf("ADICIONAR VENDA -------- 1\n");
        printf("  PARA SAIR ------------- 2\n");
        printf("\n");

        printf("Informe o código: ");
        scanf("%d", &codigo);

        fflush(stdin);

        switch (codigo)
        {
        case 1:

            fflush(stdin);
            printf("Informe o nome do produto: ");
            gets(nomeDoProduto[posicao]);

            fflush(stdin);
            
            printf("Informe o valor: R$");
            scanf("%f", &preco[posicao]);

            printf("Informe a quantidade: ");
            scanf("%d", &quantidade[posicao]);
            printf("\n");

            valorTotal[posicao] = preco[posicao] * quantidade[posicao];

            posicao++;
            break;

        case 2:

            printf("SAINDO\n");
            sleep(1);
            printf("EXIBINDO A LISTA DE VENDAS\n");
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
        printf("PRODUTO: %s\n", nomeDoProduto[i]);
        printf("PREÇO: R$%.2f\n", preco[i]);
        printf("QUANTIDADE: %d\n", quantidade[i]);
        printf("VALOR A PAGAR: R$%.2f\n", valorTotal[i]);
        printf("\n");
    }

    getchar();
    return 0;
}