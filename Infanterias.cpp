#include "Infanterias.h"
Infanterias::Infanterias(int fil,int col,Pieza***& tab,bool jug):Pieza(fil,col,tab,jug)
{
	if(jug){
		this->caracter = 'L';
	}else{
		this->caracter = 'I';
	}
}

Infanterias::~Infanterias()
{
}
bool Infanterias::valid(int fil ,int col){
	if(jugador){
		if(tablero[fil][col] == NULL){
			if(fila+1 == fil && col == columna  ){
				return true;
			}else{
			    return false;
			}
		}else{
			if(jugador != tablero[fil][col]->getJugador()){
				if(fil == fila+1 && col == columna+1 || fil == fila+1 && col == columna-1){
					return true;
				}else{
					return false;
				}
				
			}else{
				return false;
			}
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
