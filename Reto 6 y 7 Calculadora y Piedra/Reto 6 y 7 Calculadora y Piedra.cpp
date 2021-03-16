#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

double calculadora(int n1,string opera,int n2);
int main(){
	cout<<calculadora(1,"+",1)<<endl;
	
	system("pause");
	return 0;
}
double calculadora(int n1,string opera,int n2){
	double resultado=0;
	
	if(opera=="+"){
		resultado=n1+n2;
	}else if(opera=="-"){
		resultado=n1-n2;
	}else if(opera=="*"){
		resultado=n1*n2;
	}else if(opera=="/"){
		resultado=n1/n2;
	}
	return resultado;
}
