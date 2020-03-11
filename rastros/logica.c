//
// Created by daniel on 11/03/20.
//
#include "camadadados.h"
#include "logica.h"
#include <stdio.h>
#include <math.h>

int verifica_movimentos(ESTADO *estado,COORDENADA c){
    int c1,c2,l1,l2;
    c1=estado->ultima_jogada.coluna;
    l1=estado-> ultima_jogada.linha;
    c2 = c.coluna;
    l2=c.linha;

    if ((sqrt((c1-c2)^2-(l1-l2)^2)) == 1) return 1;
    else return 0;
}

int jogar(ESTADO *estado, COORDENADA c){
    if (verifica_movimentos(estado,c)){

    estado->tab[c.linha][c.coluna] = BRANCA;
    return 1;}
    else{
       return 0;
    }
}
