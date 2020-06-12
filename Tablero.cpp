#include "Tablero.h"

#include <iostream>
using std::cout;
using std::endl;

Tablero::Tablero(){
	size=3;
	matriz = new Pieza**[size];
	
	for(int i = 0;i<size;i++){
		matriz[i] = new Pieza*[size];
	}
	///instanciar size x size casillas
//	for(int i=0;i<size;i++)
//		for(int j=0;j<size;j++)
		   
		  // matriz[i][j] = new Pieza();
	
}

Tablero::~Tablero(){
	//liberar 9 casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			delete matriz[i][j];
			matriz[i][j] = NULL;
		}
		
	for(int i = 0;i<size;i++){
		delete[] matriz[i];
	}
	
	delete[] matriz;
		  
}
		



