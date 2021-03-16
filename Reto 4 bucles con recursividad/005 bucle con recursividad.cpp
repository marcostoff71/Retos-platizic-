#include<iostream>
#include<stdlib.h>
#include<string.h>


using namespace std;

void RepetirPalabra(string palabra,int veces){
	if(veces==1){
		cout<<palabra<<endl;
	}else{
		cout<<palabra<<endl;
		RepetirPalabra(palabra,veces-1);
	}
}
int main(){
	RepetirPalabra("asds",20);
	
	
	system("pause");
	return 0;
}
