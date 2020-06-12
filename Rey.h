#ifndef REY_H
#define REY_H

#include "Pieza.h"

class Rey : public Pieza
{
	public:
		Rey(int fil,int col,Pieza*** tab,bool jug);
		~Rey();
		bool valid(int , int);
	protected:
};

#endif
