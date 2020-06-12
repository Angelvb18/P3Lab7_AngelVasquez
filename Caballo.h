#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class Caballo : public Pieza
{
	public:
		Caballo(int fil,int col,Pieza***& tab,bool jug);
		~Caballo();
		bool valid(int , int);
	protected:
};

#endif
