#include <stdio.h>
#include <string.h>

int main()
{

    int matriza[4][4];
    int matrizb[4][4];
    int matrizr[4][4];
    char calculo[4];
    int linha, coluna;

    for (linha = 0; linha <= 3; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            scanf("%d", &matriza[linha][coluna]);
        }
    }
    for (linha = 0; linha <= 3; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            scanf("%d", &matrizb[linha][coluna]);
        }
    }
    scanf("%s", calculo);

    if (strcmp(calculo, "soma") == 0)
    {
        for (linha = 0; linha <= 3; linha++)
        {
            for (coluna = 0; coluna <= 3; coluna++)
            {
                matrizr[linha][coluna] = matriza[linha][coluna] + matrizb[linha][coluna];
            }
        }
    }
    else if (strcmp(calculo, "sub") == 0)
    {
        for (linha = 0; linha <= 3; linha++)
        {
            for (coluna = 0; coluna <= 3; coluna++)
            {
                matrizr[linha][coluna] = matriza[linha][coluna] - matrizb[linha][coluna];
            }
        }
    }
    else if (strcmp(calculo, "mult") == 0)
    {
        for (linha = 0; linha <= 3; linha++)
        {
            for (coluna = 0; coluna <= 3; coluna++)
            {
                matrizr[linha][coluna] = 0;
                for (int k = 0; k <= 3; k++)
                {

                    matrizr[linha][coluna] += matriza[linha][k] * matrizb[k][coluna];
                }
            }
        }
    }
    for (linha = 0; linha <= 3; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)

        {
            printf("%4d", matrizr[linha][coluna]);
        }

        printf("\n");
    }
    return 0;
}