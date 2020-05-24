/*
    *TATETI MOVEMENT by agustin wet - fecha 23/5/2020
    *Esta funcion se encarga de realizar el mobimiento del jugador
    *el jugador 1 es representado por un 10 , y el jugador 2 por un -1
    *si una casilla ya esta ocupada no se puede reescribir
*/

#include "tateti.h"

int datovalido(){

    int aux;

    while(1){
        scanf("%d",&aux);

        if(aux<10 && aux>0){
            return aux;
        }else{
            printf("INGRESE UN NUMERO DEL 1 AL 9 .\n");
        }
    }
}


void movement(int *ptr,int player){

    int pos;
    char player_simbol;

    player_simbol = player == 1 ? 'X':'O';

    while(1){

        printf("Player %d (%c) move in (1-9) ? : ",player,player_simbol);
        pos = datovalido();

        ptr = ptr+(pos-1); //muevo el puntero a la posicion indicada

        if( *ptr == 10 || *ptr == -1 ){
            printf("Seleccione otra posicion que no este ocupada.\n");
        }else{
            switch (player){
                case 1:
                    *ptr = 10;
                    break;
                case 2:
                    *ptr = -1;
                    break;
                default:
                    break;
            }
            break;
        }

    }
}
