#include<iostream>
#include<stdlib.h>

using namespace std;

void reverseString(string &letra);
void swap(char &a1,char &a2);
int main(){
	
	
	string nombre="marco";
	reverseString(nombre);
	cout<<nombre<<endl;
	
	system("pause");
	return 0;
}


void reverseString(string &letra){
	int n=letra.length();
	for(int i=0;i<n/2;i++){
		swap(letra[i],letra[n-i-1]);
	}
}
void swap(char &a1,char &a2){
	char aux;
	aux=a1;
	a1=a2;
	a2=aux;
}
