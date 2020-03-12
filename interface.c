//
// Created by julio on 12/03/20.
//

#include "interface.h"

void mostrar_tabuleiro(ESTADO estado) {
    int j, i;
    for (j = 0; j <= 7; j++) {
        for ( i = 0; i <= 7; i++) {
            if (j == 7 && i == 0)
                printf ("2");
            else if (j == 0 && i == 7)
                printf ("1");
            else {
                   switch (estado -> tab [j] [i]) {
                       case PRETA:
                           printf ("#");
                           break;
                       case VAZIO:
                           printf (".");
                           break;
                       case BRANCA:
                           printf ("*");
                           break;
                   }
            }
           }
    printf ("\n Efetue uma Jogada");
    }
}

