#include <iostream>
#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	public:
		Pieza(int fil,int col,Pieza*** tab ,bool jug);
		bool movimiento(int fil,int col);
		char getChar();
		bool getJugador();
		virtual bool valid(int fil ,int col) = 0;
		Pieza*** tablero;
	protected:
		
		int fila;
		int columna;
		char caracter;
		bool jugador;
		bool validarDentro(int fil,int col);
		
		
};

#endif
