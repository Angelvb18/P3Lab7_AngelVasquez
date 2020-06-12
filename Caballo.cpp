#include "Caballo.h"

Caballo::Caballo(int fil,int col,Pieza***& tab,bool jug):Pieza(fil,col,tab,jug)
{
	if(jug){
		this->caracter = 'O';
	}else{
		this->caracter = 'C';
	}
}

Caballo::~Caballo()
{
}
bool Caballo::valid(int fil, int col){
	if(jugador){
		if(fila+2 == fil && col == columna+1 ||  fila+2 == fil && col == columna-1 || fila-2 == fil && col == columna+1 || fila-2 == fil && col == columna-1){
			return true;
		}else{
		    return false;
		}
		if(fila +1 == fil && col == columna+2 || fila +1 == fil && col == columna-2 || fila -1 == fil && col == columna+2 || fila -1 == fil && col == columna-2){
			return true;
		}else{
			return false;
		}
	}else{
		if(tablero[fil][col] == NULL){
			if(fila-1 == fil && col == columna  ){
				return true;
			}else{
			    return false;
			}
		}else{
			if(jugador != tablero[fil][col]->getJugador()){
				if(fil == fila-1 && col == columna-1 || fil == fila-1 && col == columna+1){
					return true;
				}else{
					return false;
				}
			}else{
				return false;
			}
		}		
		
	}
}
