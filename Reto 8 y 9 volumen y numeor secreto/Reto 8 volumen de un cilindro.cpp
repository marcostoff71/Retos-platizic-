#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	//El volumen de un cilindro es p r� h, y el �rea de su superficie es 2p r h + 2p r�.
	//l volumen de un cilindro es p r� h, y el �rea de su superficie es 2p r h + 2p r�.
	double altura,radio,area,volumen;
	cout<<"Dame la altura del cilindro: ";cin>>altura;
	cout<<"Dame el radio del cilindro: ";cin>>radio;
	volumen=M_PI*pow(radio,2)*altura;
	cout<<"El volumen es: "<<volumen<<endl;
	
	area=((2*M_PI)*(radio*altura))+((2*M_PI)*pow(radio,2));
	cout<<"El area es: "<<area<<endl;
	
	
	system("pause");
	return 0;
}
