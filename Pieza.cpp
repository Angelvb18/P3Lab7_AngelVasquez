#include "Pieza.h"
Pieza::Pieza(int fil,int col,Pieza*** tab,bool jug){
	fila = fil;
	columna = col;
	tablero = tab;
	jugador = jug;
}
bool Pieza::movimiento(int fil,int col){
	if(valid(fil,col)){
		if(Pieza* p = tablero[fil][col]){
			delete p;
			tablero[fil][col] = NULL;
		}
		tablero[fil][col] = tablero[fil][col];
		tablero[fila][columna]= NULL;
		fila = fil;
		columna = col;
		return true;
	}
	return false;
}
char Pieza::getChar(){
	return caracter;
}
bool Pieza::getJugador(){
	return jugador;
}
bool Pieza::validarDentro(int fil,int col){
	bool valid = true;
	if(fil >= 8 || fil < 0){
		valid = false;
	}
	if(col >= 8 || col < 0){
		valid = false;
	}
	return valid;
}
