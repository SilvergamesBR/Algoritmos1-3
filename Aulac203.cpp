#include <iostream>


using namespace std;
int main(){
	int X=0,Y=0,vet[50],enct=0;
	while(enct==0&&Y<50){
		cin>>vet[Y];
		if(vet[Y]==-1){
			enct=1;
		}
		Y++;
	}
	enct=0;
	Y--;
	cin>>X;
	while(Y>=0){
		if(vet[Y]==X){
			cout<<"\nO numero esta na posicao "<<Y+1;
			enct=1;
		}
		Y--;
	}
	if(enct==0){
		cout<<"O numero nao se encontra no vetor";
	}
	return 0;
}