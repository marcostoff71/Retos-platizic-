#include<iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;


int main(){
	char vocales[]={'a','e','i','o','u'};
	string texto;
	cout<<"Ingres un texto y te lo dare sin vocales: ";
	getline(cin,texto);
	
	for(int i=0;i<texto.length();i++){
		
		for(int j=0;j<5;j++){
			
			if(texto[i]==vocales[j]){
				cout<<vocales[j]<<endl;
				cout<<i<<endl;
				texto[i]=' ';
			}
		}
	}
	cout<<"\nTexto Final: "<<endl;
	cout<<texto<<endl;
	
	system("pause");
	return 0;
}
