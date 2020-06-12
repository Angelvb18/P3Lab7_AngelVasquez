#include "Elefantes.h"

Elefantes::Elefantes(int fil,int col,Pieza***& tab,bool jug):Pieza(fil,col,tab,jug)
{
	if(jug){
		this->caracter = '3';
	}else{
		this->caracter = 'E';
	}
}

Elefantes::~Elefantes()
{
}
bool Elefantes::valid(int fil, int col){
	if(jugador){
		if(fila+2 == fil && col == columna+2  ||fila+2 == fil && col == columna-2  || fila-2 == fil && col == columna+2 || fila-2 == fil && col == columna-2){
			return true;
		}else{
			return false;
		}
	}else{
		
		if(fila+2 == fil && col == columna+2  ||fila+2 == fil && col == columna-2  || fila-2 == fil && col == columna+2 || fila-2 == fil && col == columna-2){
			return true;
		}else{
		    return false;
		}
   }
}
