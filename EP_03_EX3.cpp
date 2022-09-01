#include <iostream>

using namespace std;

int main(){
	int X=0,vet[10],num,detc=0,Y=0;
	cout<<"Indique o tmanho do vetor(<=10): ";
	cin>>num;
	while(X<num){
		cin>>vet[X];
		X++;
	}
	int pos[num];
	X=0;
	cout<<"Digite o valor de X: ";
	cin>>num;
	while(X<10){
		if(vet[X]==num){
			detc=1;
			pos[Y]=X;
			Y++;
		}
		X++;
	}
	X=0;
	if(detc==1){
		cout<<"X: "<<num<<"	Posicao no vetor: ";
		while(X<Y){
			cout<<pos[X];
			X++;
		}
	}else{
		cout<<"X: "<<num<<"	Valor nao encontrado no vetor\n";
	}
	return 0;
}