#include "Rey.h"

Rey::Rey(int fil,int col,Pieza***& tab,bool jug) : Pieza(fil,col,tab,jug)
{
	if(jug){
		this->caracter = 'P';
	}else{
		this->caracter = 'R';
	}
}
bool Rey::valid(int fil, int col){
	if(fil == fila+1 || fil == fila-1 || fil == fila ){
		if(col == columna+1 || col == columna-1 || col == columna ){
			return true;
		}else{
			return false;
		}
	}
	else{
		return false;
	}	
}
Rey::~Rey()
{
}
