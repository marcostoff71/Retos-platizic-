//area de un triangulo
#include<iostream>
#include<stdlib.h>
#include<string.h>


using namespace std;

int main(){
	int base,area,perimetro,altura;	
	
	cout<<"Ingresa la base del triangulo: ";cin>>base;
	cout<<"ingresa la altura del triangulo: ";cin>>altura;
	perimetro=base*3;
	area=(base*altura)/2;
	
	cout<<"El area es: "<<area<<endl;
	cout<<"El perimetro es: "<<perimetro<<endl;
	
	system("pause");
	return 0;
}
