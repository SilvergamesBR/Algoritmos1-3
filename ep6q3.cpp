#include <iostream>

using namespace std;

int maior(double *Vet,int X){
	int maior=Vet[0],Y=0;
	while(Y<X){
		if(Vet[Y]>maior){
			maior=Vet[Y];
		}
		Y++;
	}
	return maior;
}

int main(){
	int N,Y=0;
	double X[5];
	cout<<"Digite o tamanho do vetor (1-5): ";
	cin>>N;
	while(N<1||N>5){
		cout<<"Digite um valor inteiro entre 1 e 5 ";
		cin>>N;
	}
	cout<<"Digite os valores do vetor: ";
	while(Y<N){
		cin>>X[Y];
		Y++;
	}
	X[0]=maior(X,N);
	cout<<"O maior elemento e "<<X[0];
}