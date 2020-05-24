/*
    *TATETI WIN_CHECKER by agustin wet - fecha 23/5/2020
    *Esta funcion comprueba si se dio la combinacion ganadora de tablero
    *el jugador 1 es representado por un 10 , y el jugador 2 por un -1
*/


#include "tateti.h"

int check_win(int tablero[9]){

    if(tablero[0] == 10 && tablero[1] == 10 && tablero[2] == 10 ){
        return 1;
    }else if( tablero[3] == 10 && tablero[4] == 10 && tablero[5] == 10 ){
        return 1;
    }else if( tablero[6] == 10 && tablero[7] == 10 && tablero[8] == 10 ){
        return 1;
    }else if( tablero[0] == 10 && tablero[3] == 10 && tablero[6] == 10 ){
        return 1;
    }else if( tablero[1] == 10 && tablero[4] == 10 && tablero[7] == 10 ){
        return 1;
    }else if( tablero[2] == 10 && tablero[5] == 10 && tablero[8] == 10 ){
        return 1;
    }else if( tablero[0] == 10 && tablero[4] == 10 && tablero[8] == 10 ){
        return 1;
    }else if( tablero[2] == 10 && tablero[4] == 10 && tablero[6] == 10 ){   //CHEKEO PLAYER 1 FINALIZADO
        return 1;
    }else if(tablero[0] == -1 && tablero[1] == -1 && tablero[2] == -1 ){
        return 1;
    }else if( tablero[3] == -1 && tablero[4] == -1 && tablero[5] == -1 ){
        return 1;
    }else if( tablero[6] == -1 && tablero[7] == -1 && tablero[8] == -1 ){
        return 1;
    }else if( tablero[0] == -1 && tablero[3] == -1 && tablero[6] == -1 ){
        return 1;
    }else if( tablero[1] == -1 && tablero[4] == -1 && tablero[7] == -1 ){
        return 1;
    }else if( tablero[2] == -1 && tablero[5] == -1 && tablero[8] == -1 ){
        return 1;
    }else if( tablero[0] == -1 && tablero[4] == -1 && tablero[8] == -1 ){
        return 1;
    }else if( tablero[2] == -1 && tablero[4] == -1 && tablero[6] == -1 ){   //CHEKEO PLAYER 2 FINALIZADO
        return 1;
    }else{
        return 0;
    }

}
