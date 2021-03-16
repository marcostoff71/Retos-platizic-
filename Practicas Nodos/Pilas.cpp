#include<iostream>
#include<stdlib.h>

using namespace std;


struct Nodo{
	int dato;
	Nodo* siguiente;
}*pila=NULL;

void Agregar(int num){
	Nodo* nuevoNodo= new Nodo();
	nuevoNodo->dato=num;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
}
void Mostrar(){
	if(pila!=NULL){
	Nodo *aux=pila;
	while(aux!=NULL){
		cout<<aux->dato<<" ";
		aux=aux->siguiente;
	}
	cout<<endl;
	}
}
int Count(){
	int cont=0;
	if(pila!=NULL){
		Nodo *aux=pila;
		while(aux!=NULL){
			cont++;
			aux=aux->siguiente;
		}
	}
	
	
	return cont;
}

int eliminar(){
	int num;
	if(pila!=NULL){
		Nodo* aux=pila;
		num=aux->dato;
		pila=pila->siguiente;
		delete aux;
	}
	
	return num;
}

int main(){
	Agregar(1);
	Agregar(2);
	
	cout<<Count()<<endl;	
	Mostrar();
	
	system("pause");
	return 0;
}
