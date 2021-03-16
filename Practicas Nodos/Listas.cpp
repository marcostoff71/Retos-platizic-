#include<iostream>
#include<stdlib.h>


using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente=NULL;
}*lista=NULL;



//prottipos de funciones 
void agregarDes(int num);
void agregarOr(int num);
void eliminarNodo(int num);
void mostrar();
int eliminar();
int cont();





//funcion principal
int main(){
	
	agregarOr(4);
	agregarOr(2);
	
	mostrar();
	
	
	
	system("pause");
	return 0;
}




//funcones
void agregarDes(int num){
	Nodo* nuevoNodo = new Nodo();
	nuevoNodo->dato=num;
	nuevoNodo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevoNodo;
	}else{
		Nodo *aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevoNodo;
	}
}
void agregarOr(int num){
	Nodo* nuevoNodo= new Nodo();
	nuevoNodo->dato=num;
	
	Nodo* aux1=lista;
	Nodo* aux2=NULL;
	
	while(aux1!=NULL&&aux1->dato<num){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista==aux1){
		lista=nuevoNodo;
		
	}else{
		aux2->siguiente=nuevoNodo;
	}
	nuevoNodo->siguiente=aux1;
}
void eliminarNodo(int num){
	
	if(lista!=NULL){
		
		Nodo* auxBorrar=lista;
		Nodo* anterior=NULL;
		while(auxBorrar!=NULL&&auxBorrar->dato!=num){
			anterior=auxBorrar;
			auxBorrar=auxBorrar->siguiente;
		}
		
		if(auxBorrar==NULL){
			
		}else if(anterior==NULL){
			lista=lista->siguiente;
		}else{
			anterior->siguiente=auxBorrar->siguiente;
		}
		
		
	}
}
void mostrar(){
	if(lista!=NULL){
		Nodo* aux1=lista;
		while(aux1!=NULL){
			cout<<aux1->dato<<" ";
			aux1=aux1->siguiente;
		}
		cout<<endl;
	}
}
int eliminar(){
	int num;
	
	num=lista->dato;
	lista=lista->siguiente;
	
	return num;
}
int cont();
