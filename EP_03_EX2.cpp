#include <iostream>

using namespace std;

int main(){
	int X=0,vet[10],num,detc=0;
	cout<<"Indique o tmanho do vetor(<=10): ";
	cin>>num;
	while(X<num){
		cin>>vet[X];
		X++;
	}
	X=0;
	cout<<"Digite o valor de X: ";
	cin>>num;
	while(X<10){
		if(vet[X]==num){
			detc=1;
		}
		X++;
	}
	if(detc==1){
		cout<<"Valor pertence ao vetor\n";
	}else{
		cout<<"Valor nao pertence ao vetor\n";
	}
	return 0;
}