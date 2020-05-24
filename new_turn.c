/*
    *TATETI TURN by agustin wet - fecha 23/5/2020
    *Esta funcion va cambiando de jugador
*/

#include "tateti.h"

int new_turn(int current_player){

    if(current_player == 1){
        return 2;
    }else{
        return 1;
    }

}
