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

int main(){
	int N;
	cout<<"Insira o valor de N: ";
	cin>>N;
	while(N<0){
		cout<<"Digite um valor maior que 0: ";
		cin>>N;
	}
	N=FAT(N);
	cout<<"N! = "<<N;
	return 0;
}