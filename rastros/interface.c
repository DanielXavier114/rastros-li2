//
// Created by daniel on 12/03/20.
//

#include <stdio.h>
#include "interface.h"
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
    for (int l; l < 8; l++)
    {
        for (int c; c < 8; l++)
        {
            if (l == 0 && c == 7)
                putchar('2');
            else if (c == 0 && l == 7)
                putchar('1');
            else
            {
                if ((estado.tab[l][c]) == BRANCA)
                    putchar('*');
                else if (estado.tab[l][c] == VAZIO)
                    putchar('.');
                else
                    putchar('#');
            }
        }
    }
}