#include <iostream>
#include <string.h>

using namespace std;
int main(){
	struct car{
		char placa[11];
		char renavam[12];
	}car[10];
	int X=0,loop=0,Y=0;
	while(loop==0 && X<10){
		if(X>0){
			cin.ignore();
		}
		cin.getline(car[X].placa,10);
		cin.getline(car[X].renavam,11);
		X++;
		cout<<"Para mais 1 registro digite 0, 1 para encerrar ";
		cin>>loop;	
	}
	while(Y<X){
		cout<<"Carro "<<Y+1<<" Placa: "<<car[Y].placa<<" Renavam: "<<car[Y].renavam<<endl;
		Y++;	
	}
	return 0;   	
}