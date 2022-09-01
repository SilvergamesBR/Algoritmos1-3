#include <iostream>

using namespace std;

void CONVERTE(int &horas,int &minutos,int &segundos){
	minutos=segundos/60;
	segundos=segundos%60;
	horas=minutos/60;
	minutos=minutos%60;
}


int main(){
	int tempo[3];
	cout<<"Digite a quantidade de segundos (>0): ";
	cin>>tempo[2];
	while(tempo[2]<0){
		cout<<"favor digitar um valor maior que 0 ";
		cin>>tempo[2];
	}
	CONVERTE(tempo[0], tempo[1], tempo[2]);
	cout<<tempo[0]<<"h "<<tempo[1]<<"min "<<tempo[2]<<"seg";
	return 0;
}