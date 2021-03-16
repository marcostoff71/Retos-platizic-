//reto 3 horas 
#include<iostream>
#include<stdlib.h>
#include<string.h>

//De horas y minutos a segundos
using namespace std;

void HorasMinutosAs();
void SegundosAhorasMi();

int main(){
	HorasMinutosAs();
	SegundosAhorasMi();
	system("pause");
	return 0;
}
void HorasMinutosAs(){
	int horas,minutos,segun;
	long segundos;
	cout<<"Ingresa las horas: ";cin>>horas;
	cout<<"Ingresa los minutos: ";cin>>minutos;
	cout<<"Ingresa los segundos: ";cin>>segun;
	
	segundos=(horas*3600);
	segundos+=minutos*60;
	segundos+=segun;
	
	cout<<"Segundos totales : "<<segundos<<endl;
	
	
}
void SegundosAhorasMi(){
	long Tsegundos;
	int horas,minutos,segundos;
	cout<<"Ingresa los segundos: ";cin>>Tsegundos;
	horas=(Tsegundos/3600);
	Tsegundos=Tsegundos%3600;
	minutos=Tsegundos/60;
	Tsegundos=Tsegundos%60;
	segundos=Tsegundos;
	
	
	cout<<"\nHoras: "<<horas;
	cout<<"\nMinutos: "<<minutos;
	cout<<"\nSegundos: "<<segundos<<endl<<endl;
}
