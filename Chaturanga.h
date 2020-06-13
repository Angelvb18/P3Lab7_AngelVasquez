#ifndef CHATURANGA_H
#define CHATURANGA_H
#include <iostream>
#include <string>
using namespace std;
#include "Pieza.h"
#include "Torre.h"
#include "Infanterias.h"
#include "Caballo.h"
#include "Elefantes.h"
#include "Rey.h"
#include "Ministro.h"
class Chaturanga
{
	public:
		Chaturanga();
		~Chaturanga();
		void jugar();
		void printTablero();
		void cTab();
		bool cordenadas(int& , int&,int&,int&,string);
		Pieza*** tablero;
	protected:
};

#endif
