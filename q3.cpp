#include <iostream>

using namespace std;

int FAT(int N){
	int X=1,Y=N;
	N=1;
	while(X<=Y){
		N=N*X;
		X++;
	}
	return N;
}

float COMBINA(float M,float P){
	float C;
	C=FAT(M)/((FAT(M-P))*FAT(P));
	if(M<P){
		C=0;
	}
	return C;
}

int main(){
   	float M,P,C;
	cout<<"Digite os valores de M e P: ";
	cin>>M>>P;
	while(M<=0){
		cout<<"Digite um valor maior que 0 para M: ";
		cin>>M;
	}
	while(P<=0){
		cout<<"Digite um valor maior que 0 para P: ";
		cin>>P;
	}
	C=COMBINA(M,P);
	cout<<"C = "<<C;
	return 0;
}