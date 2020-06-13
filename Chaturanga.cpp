#include "Chaturanga.h"


Chaturanga::Chaturanga()
{
	cTab();
}

Chaturanga::~Chaturanga()
{
}
void Chaturanga::jugar(){
	bool sigue = false;
	int cont =1;
	cTab();
	string cord;
	while(sigue == false){
		printTablero();
		if(cont %2 != 0){
			int i , j,h,k;
			bool valid = false;
			do{
				
				cout << "Jugador 1 Ingrese la cordenada(Piezas Blancas)" << endl;
				cout << ":";
				cin >> cord;
				valid = cordenadas(i,j,h,k,cord);
				cout << i << " " << j << " "<< h << " "<< k<< endl; 
				if(valid){
					if(tablero[i][j]->movimiento(h,k)){
				   		cout << "Movimiento valido nlnklnklnklnk1" << endl;		   
					}else{
						cout << "Movimineto no valido" << endl;
					}
				}
				
				
			}while( valid== false); 
			
			
		}else{
			cout << "Jugador 2 Ingrese la cordenada(Piezas Negras)" << endl;
			cout << ":";
			cin >> cord;
			
		}
		if(cord == "salir"){
			sigue = true;
		}
		cont ++;
	}
}
void Chaturanga::printTablero(){
	cout <<"   A  B  C  D  E  F  G  H"<<endl;
	for(int i=0;i<8;i++){
		cout<<i << " ";
		for(int j=0;j<8;j++){
			if(tablero[i][j] == NULL){
				cout << " . ";
			}else{
				
				cout << " " <<tablero[i][j]->getChar() << " ";
			}
			
		}
		cout<<"|"<<endl;
	}
		
}
void Chaturanga::cTab(){
	
	this->tablero = new Pieza**[8];
	
	for(int i = 0;i<8;i++){
		tablero[i] = new Pieza*[8];
	}
	for(int i = 0 ; i < 8 ; i++){
		for(int j = 0 ; j < 8 ; j++){
			tablero[i][j] = NULL;
		}
	}
	for(int i = 0 ; i < 8 ; i++){
		tablero[1][i] = new Infanterias(1,i,tablero,false);
		tablero[6][i] = new Infanterias(6,i,tablero,true);
	}
	
	//torre
	tablero[0][0] = new Torre(0,0,tablero,false);
	tablero[0][7] = new Torre(0,7,tablero,false);
	tablero[7][0] = new Torre(7,0,tablero,true);
	tablero[7][7] = new Torre(7,7,tablero,true);
	//caballa
	tablero[0][1] = new Caballo(0,1,tablero,false);
	tablero[0][6] = new Caballo(0,6,tablero,false);
	tablero[7][1] = new Caballo(7,1,tablero,true);
	tablero[7][6] = new Caballo(7,6,tablero,true);
	//Elefantes
	tablero[0][2] = new Elefantes(0,2,tablero,false);
	tablero[0][5] = new Elefantes(0,5,tablero,false);
	tablero[7][2] = new Elefantes(7,2,tablero,true);
	tablero[7][5] = new Elefantes(7,5,tablero,true);
	//Rey
	tablero[0][3] = new Rey(0,3,tablero,false);
	tablero[7][4] = new Rey(7,4,tablero,true);
	//MINISTRO
	tablero[0][4] = new Ministro(0,4,tablero,false);
	tablero[7][3] = new Ministro(7,3,tablero,true);
	
}
bool Chaturanga::cordenadas(int& i , int& j ,int&k,int&h,string card){
	if(card.size() == 5){
		if(card[0] -64 >= 1 && card[0] -64 <=8 && card[3] -64 >= 1 && card[3] -64 <=8){
			if(card[1] -48 >= 1 && card[1] -48 <=8 && card[4] -48 >= 1 && card[4] -48 <=8){
				i =card[0] -64;
				j = card[1] -48;
				k=card[3]-64;
				h=card[4]-48;
				return true;
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else{
		return false;
	}
}

