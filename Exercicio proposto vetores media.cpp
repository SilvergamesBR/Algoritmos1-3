#include <iostream>

using namespace std;

int main(){
	float num[5],med;
	int mai=0,men=0,ig=0,N=0;
	while(N<5){
		cin>>num[N];
		N++;
	}
	N=0;
	med=(num[0]+num[1]+num[2]+num[3]+num[4])/5;
	while(N<5){
		if(num[N]<med){
			men++;
		}else if(num[N]>med){
			mai++;
		}else{
			ig++;
		}
		N++;
	}
	cout<<mai<<" numeros maiores que a media\n";
	cout<<men<<" numeros menores que a media\n";
	cout<<ig<<" numeros iguais a media\n";
	return 0;	
}