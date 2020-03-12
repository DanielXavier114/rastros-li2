#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camadadados.h"
<<<<<<< HEAD

ESTADO *inicializar_estado(){

}

int obter_jogador_atual(ESTADO *estado){

}

int obter_numero_de_jogadas(ESTADO *estado){

}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){

}
=======
>>>>>>> dc400e3f727a6ce428e8398cf088ec3bf13cdc8e
=======
>>>>>>> b7eedccb4f55a9df610592d6df03760389437924

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