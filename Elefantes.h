#ifndef ELEFANTES_H
#define ELEFANTES_H

#include "Pieza.h"

class Elefantes : public Pieza
{
	public:
		Elefantes(int fil,int col,Pieza***& tab,bool jug);
		~Elefantes();
		bool valid(int , int);
	protected:
};

#endif
