#ifndef CHATURANGA_H
#define CHATURANGA_H
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
		Pieza*** tablero;
	protected:
};

#endif
