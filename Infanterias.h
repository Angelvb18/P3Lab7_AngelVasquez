
#ifndef INFANTERIAS_H
#define INFANTERIAS_H
#include "Pieza.h"
class Infanterias : public Pieza
{
	public:
		Infanterias(int fil,int col,Pieza*** tab,bool jug);
		~Infanterias();
		bool valid(int , int);
	protected:
};

#endif
