#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camadadados.h"

ESTADO *inicializar_estado()
{
    ESTADO estadoJogo;

    estadoJogo = (ESTADO){.tab = {
                              {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                              {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                              {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                              {VAZIO, VAZIO, VAZIO, VAZIO, BRANCA, VAZIO, VAZIO, VAZIO},
                              {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                              {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                              {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                              {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO}},
                          .ultima_jogada = {4, 3},
                          .jogadas = {},
                          .num_jogadas = 0,
                          .jogador_atual = 1};

    return &estadoJogo;
}

int obter_jogador_atual(ESTADO *estado)
{
    int jog;
    jog = estado->jogador_atual;
    return jog;
}
int obter_numero_de_jogadas(ESTADO *estado)
{
    int numJogadas;
    numJogadas = estado->num_jogadas;

    return numJogadas;
}
CASA obter_estado_casa(ESTADO *e, COORDENADA c)
{
    CASA casa;
    casa = e->tab[c.linha][c.coluna];
    return casa;
}