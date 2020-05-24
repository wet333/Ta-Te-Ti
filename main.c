/*
    *TATETI by agustin wet - fecha 23/5/2020
    *Clasico juego de tateti implementado en C
*/

#include "tateti.h"

int main()
{
    int gamestatus = 0 ;        // 0 = en progreso , 1 = fin
    int turn = 1;               // cantidad de turnos
    int current_player = 1;     // jugador que le corresponde mover en este turno

    int tablero[9] = {1,2,3,4,5,6,7,8,9};   //estos valores no estan relacionados con los q se imprimen en pantalla

    int *tblpointer;            //puntero al array del tablero
    tblpointer = &tablero;

    while(1){

        update_screen(tablero);                         //Funciona
        movement(tblpointer,current_player);            //Funciona
        gamestatus = check_win(tablero);                //Funciona

        if(gamestatus == 1){
            update_screen(tablero);
            printf("JUGADOR %d GANADOR",current_player);
            _sleep(10000);
            return 0;
        }
        if(turn == 9){
            update_screen(tablero);
            printf("EMPATE");
            _sleep(10000);
            return 0;
        }
        current_player = new_turn(current_player);      //Funciona
        turn++;

    }

    return 0;
}
