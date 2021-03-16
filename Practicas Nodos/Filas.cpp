#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
}*frente=NULL,*fin=NULL;



void agregar(int num);
int eliminar();
void mostrar();
int cont();


int main(){
	agregar(1);
	agregar(2);
	agregar(3);
	agregar(4);
	agregar(5);
	
	mostrar();
	
	
		cout<<cont()<<endl;
		
	cout<<eliminar()<<endl;
	
	cout<<cont()<<endl;
	system("pause");
	return 0;
}


void agregar(int num){
	Nodo* nuevoNodo =new Nodo();
	nuevoNodo->dato=num;
	nuevoNodo->siguiente=NULL;
	
	if(frente==NULL){
		frente=nuevoNodo;
	}else{
		fin->siguiente=nuevoNodo;	
	}
	
	fin=nuevoNodo;
	
}
int eliminar(){
	int num;
	if(frente==fin){
		num=frente->dato;
		frente=NULL;
		fin=NULL;
	}else{
		num=frente->dato;
		frente=frente->siguiente;
	}
	return num;
}
void mostrar(){
	if(frente!=NULL){
		Nodo* aux=frente;
		while(aux!=NULL){
			cout<<aux->dato<<" ";
			aux=aux->siguiente;
		}
		cout<<endl;
	}
}
int cont(){
	int cont=0;
	if(frente!=NULL){
		Nodo* aux=frente;
		while(aux!=NULL){
			cont++;
			aux=aux->siguiente;
		}
	}
	
	return cont;
}
