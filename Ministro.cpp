#include "Ministro.h"

Ministro::Ministro(int fil,int col,Pieza*** tab,bool jug) : Pieza(fil,col,tab,jug)
{
	if(jug){
		this->caracter = 'W';
	}else{
		this->caracter = 'M';
	}
}

Ministro::~Ministro()
{
}
bool Ministro::valid(int fil, int col){
	if(fil == col || fil+col == 8){
		return true;
	}else{
		return false;
	}
}
