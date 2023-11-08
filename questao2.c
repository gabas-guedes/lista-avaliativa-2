#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char entrada[35], time1[30], time[2][30];
    float forcas[11];
    char *jogador, *posicao, *forca;
    float forcaTime[2];
    int g = 0;
    int l1 = 1, l2 = 2;
    int z1 = 3, z2 = 4;
    int v1 = 5, v2 = 6;
    int m1 = 7, m2 = 8;
    int a1 = 9, a2 = 10;

    // ler entrada dos 2 times
    for (int i = 0; i < 2; i++)
    {
        // resetar vetor de forca
        for (int i = 0; i < 11; i++)
        {
            forcas[i] = 0;
        }

        // fgets armazena tbm o ENTER depois que vc digita
        fgets(time[i], 30, stdin);
        // essa linha de baixo remove esse enter
        time[i][strcspn(time[i], "\n")] = 0;

        for (int j = 0; j < 11; j++)
        {
            fgets(entrada, 35, stdin);

            jogador = strtok(entrada, ";");
            posicao = strtok(NULL, ";");
            forca = strtok(NULL, ";");

            if (*posicao == 'G')
            {
                forcas[g] = atoi(forca); // pega ponteiro e transforma em int
            }
            else if (*posicao == 'L')
            {
                if (forcas[l1] == 0)
                {
                    forcas[l1] = atoi(forca);
                }
                else
                {
                    forcas[l2] = atoi(forca);
                }
            }
            else if (*posicao == 'Z')
            {
                if (forcas[z1] == 0)
                {
                    forcas[z1] = atoi(forca);
                }
                else
                {
                    forcas[z2] = atoi(forca);
                }
            }
            else if (*posicao == 'V')
            {
                if (forcas[v1] == 0)
                {
                    forcas[v1] = atoi(forca);
                }
                else
                {
                    forcas[v2] = atoi(forca);
                }
            }
            else if (*posicao == 'M')
            {
                if (forcas[m1] == 0)
                {
                    forcas[m1] = atoi(forca);
                }
                else
                {
                    forcas[m2] = atoi(forca);
                }
            }
            else if (*posicao == 'A')
            {
                if (forcas[a1] == 0)
                {
                    forcas[a1] = atoi(forca);
                }
                else
                {
                    forcas[a2] = atoi(forca);
                }
            }
        }

        forcaTime[i] = ((8 * forcas[g]) +
                        (10 * (forcas[l1] + forcas[l2])) +
                        (5 * (forcas[z1] + forcas[z2])) +
                        (8 * (forcas[v1] + forcas[v2])) +
                        (11 * (forcas[m1] + forcas[m2])) +
                        (12 * (forcas[a1] + forcas[a2]))) /
                       100;
    }

    printf("%s: %.2f de forca\n", time[0], forcaTime[0]);
    printf("%s: %.2f de forca\n", time[1], forcaTime[1]);

    if (forcaTime[0] > forcaTime[1])
    {
        printf("%s eh mais forte\n", time[0]);
    }
    else if (forcaTime[0] < forcaTime[1])
    {
        printf("%s eh mais forte\n", time[1]);
    }

    return 0;
}