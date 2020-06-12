#include <iostream>
#include <string>
#include "Chaturanga.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	string resp;
	Chaturanga* juego = new Chaturanga();
	cout << juego->tablero[0][0]->getChar() << endl;
	do{
		cout << "Desea jugar? (1 = si)"<<endl << ":";
		getline(cin,resp);
		if(resp == "1"){
			juego->jugar();
		}else{
			cout << "Gracias por usar el programa!!" << endl;
		}
	}while(resp == "1");
	delete juego;
	return 0;
}
