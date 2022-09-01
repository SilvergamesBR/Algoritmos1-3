#include <iostream>

using namespace std;

int main(){
	int pos[5],num[5],X=0,Y=0;
	while(X<5){
		cin>>num[X];
		X++;
	}
	X=0;
	while(X<5){
		if(num[X]==0){
			pos[Y]=X;
			Y++;
		}
		X++;
	}
	X=0;
	if(Y==0){
		cout<<"Nenhum elemento zero no vetor";
	}else{
		cout<<"Posicoes: ";
		while(X<Y){
			cout<<pos[X]<<" ";
			X++;
		}
	}
	return 0;
}