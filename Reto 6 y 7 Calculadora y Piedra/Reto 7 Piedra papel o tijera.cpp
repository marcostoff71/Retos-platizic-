#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;

void comprobarGanador(string j1,string j2);
int main(){
	srand(time(NULL));
	int ran=0;
	string j1,j2,juego[]={"piedra","papel","tijera"};
	
	for(int i=0;i<100;i++){
		ran=rand()%3;
		if(i==1){
			j1=juego[ran];
		}else{
			j2=juego[ran];
		}
	}
	cout<<"Jugador 1: "<<j1<<endl;
	cout<<"Jugador 2: "<<j2<<endl;
	
	comprobarGanador(j1,j2);
	system("pause");
	return 0;
}
void comprobarGanador(string j1,string j2){
	if(j1=="piedra"&&j2=="tijera"){
		cout<<"Gana el jugador 1"<<endl;
	}else if(j2=="piedra"&&j1=="tijera"){
		cout<<"Gana el jugador 2"<<endl;
	}else if(j1=="papel"&&j2=="piedra"){
		cout<<"Gana el jugador 1"<<endl;
	}else if(j2=="papel"&&j1=="piedra"){
		cout<<"Gaa el jugador 2"<<endl;
	}else if(j1=="tijera"&&j2=="papel"){
		cout<<"Gana el jugador 1"<<endl;
	}else if(j2=="tijera"&&j1=="papel"){
		cout<<"Gana el jugaodr 2"<<endl;
	}else{
		cout<<"Empate"<<endl;
	}
}
