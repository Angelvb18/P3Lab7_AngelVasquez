#include "Torre.h"

Torre::Torre(int fil,int col,Pieza*** tab,bool jug):Pieza(fil,col,tab,jug)
{
	if(jug){
		this->caracter = 'Y';
	}else{
		this->caracter= 'T';
	}
}

Torre::~Torre()
{
}
bool Torre::valid(int fil ,int col){
	if(jugador){
		if(tablero[fil][col] == NULL){
			if(fila+1 == fil && col == columna  ){
				return true;
			}else{
			    return false;
			}
		}else{
			if(fila+1 == fil && col == columna  ){
				return true;
			}else{
			    return false;
			}
		}
		
	}else{
		if(tablero[fil][col] == NULL){
			if(col == columna  || fil == fila){
				return true;
			}else{
			    return false;
			}
		}else{
			if(col == columna  || fil == fila ){
				return true;
			}else{
			    return false;
			}
		}		
		
	}
	
}
