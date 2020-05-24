/*
    *TATETI INTERFACE by agustin wet - fecha 23/5/2020
    *Esta funcion lee los datos del estado del juego y dibuja el respectivo tablero
    *el jugador 1 es representado por un 10 , y el jugador 2 por un -1
    *el tablero interno es un array de chars que corresponden a la interface
    *el tablero a secas es el de la data del estado del juego
*/

#include "tateti.h"

void update_screen(int tablero[9]){

    int i;
    char tablero_interno[9] = {'1','2','3','4','5','6','7','8','9'};

    for(i=0;i<9;i++){

        if(tablero[i]==10){
            tablero_interno[i]='X';
        }else if(tablero[i]==(-1)){
            tablero_interno[i]='O';
        }else{
            //NADA
        }
    }

    system("cls");  //borrar pantalla

    printf("Tateti made by Agustin Wet\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",tablero_interno[0],tablero_interno[1],tablero_interno[2]);
    printf("-----------------\n");
    printf("  %c  |  %c  |  %c  \n",tablero_interno[3],tablero_interno[4],tablero_interno[5]);
    printf("-----------------\n");
    printf("  %c  |  %c  |  %c  \n",tablero_interno[6],tablero_interno[7],tablero_interno[8]);
    printf("     |     |     \n\n");

}
