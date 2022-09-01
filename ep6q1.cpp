#include <iostream>
#include <math.h>

using namespace std;

int fator(int N){
	int X=1,Y=N;
	N=1;
	while(X<=Y){
		N=N*X;
		X++;
	}
	return N;
}

double soma (double X,int N){
	int Y=1,flipflop=0,fact=2;
	double cos=1;
	while(Y<N){
		if(flipflop==0){
			cos=cos-(pow(X,fact)/fator(fact));
			flipflop=1;
		}else if(flipflop==1){
			cos=cos+(pow(X,fact)/fator(fact));
			flipflop=0;
		}
		Y++;
		fact+=2;
	}
	return cos;
}

int main(){
	int N;
	double X;
	cout<<"Insira o numero de termos (entre 1 e 20) :";
	cin>>N;
	while(N<1 || N>20){
		cout<<"Por favor digite um valor entre 1 e 20 ";
		cin>>N;
	}
	cout<<"Digite o valor de X :";
	cin>>X;
	X=soma(X,N);
	cout<<"cosseno(x) = "<<X;
	return 0;   	
}