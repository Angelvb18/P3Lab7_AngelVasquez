#ifndef TABLERO_H
#define TABLERO_H

#include "Pieza.h"

class Tablero
{
	public:
		Tablero();
		
		bool marcarCasilla(int,int);
                void marcarCasilla2(int,int,char);
		void printTablero();
		Pieza*** matriz; 
		~Tablero();
	protected:
		//matriz de apuntadores a casillas
		
		int size;
};

#endif
