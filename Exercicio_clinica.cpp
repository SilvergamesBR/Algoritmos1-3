#include <iostream>
using namespace std;
int main(){
	int I;
	float P,A,IMC;
	char nome[100];
	cout<<"Digite seu nome :";
	cin.getline(nome,100);
	cout<<"Digite sua idade :";
	cin>>I;
	cout<<"Digite seu peso e altura :";
	cin>>P>>A;
	IMC= P/(A*A);
	cout<<"Nome:"<<nome<<endl;
	cout<<"Idade :"<<I<<endl;
	cout<<"IMC :"<<IMC<<endl;
	if(IMC<=15){
		cout<<"Extremamente abaixo do peso"<<endl;
	}else if(IMC <=16){
		cout<<"Gravemente abaixo do peso"<<endl;
	}else if(IMC <=18.5){
		cout<<"Abaixo do peso ideal"<<endl;
	}else if(IMC <=25){
		cout<<"Peso ideal"<<endl;
	}else if(IMC <=30){
		cout<<"Sobrepeso"<<endl;
	}else if(IMC <=35){
		cout<<"Obesidade de grau I"<<endl;
	}else if(IMC <40){
		cout<<"Obesidade de grau II"<<endl;
	}else {
		cout<<"Obesidade de grau III"<<endl;
	}
	return 0;
}