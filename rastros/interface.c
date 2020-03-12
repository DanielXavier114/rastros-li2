#include <stdio.h>
#include "interface.h"
#include "camadadados.h"
int interpretador(ESTADO *e)
{
    char linha[BUF_SIZE];
    char col[2], lin[2];
    if (fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2)
    {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
    }
    return 1;
}

void mostrar_tabuleiro(ESTADO estado)
{
    int j, i;
    for (j = 0; j <= 7; j++)
    {
        for (i = 0; i <= 7; i++)
        {
            if (j == 7 && i == 0)
                printf("2");
            else if (j == 0 && i == 7)
                printf("1");
            else
            {
                switch (estado->tab[j][i])
                {
                case PRETA:
                    printf("#");
                    break;
                case VAZIO:
                    printf(".");
                    break;
                case BRANCA:
                    printf("*");
                    break;
                }
            }
        }
        printf("\n Efetue uma Jogada");
    }
}