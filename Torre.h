#ifndef TORRE_H
#define TORRE_H
#include "Pieza.h"
class Torre: public Pieza
{
	public:
		Torre(int fil,int col,Pieza***& tab,bool jug);
		~Torre();
		bool valid(int , int);
	protected:
};

#endif
