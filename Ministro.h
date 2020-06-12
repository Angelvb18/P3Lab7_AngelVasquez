#ifndef MINISTRO_H
#define MINISTRO_H

#include "Pieza.h"

class Ministro : public Pieza
{
	public:
		Ministro(int fil,int col,Pieza*** tab,bool jug);
		~Ministro();
		bool valid(int , int);
	protected:
};

#endif
