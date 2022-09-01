#include <iostream>
#include <math.h>

using namespace std;

double fator(int N){//calculo do fatorial
	int X=1,Y=N;//criacao das variaveis auxiliares ao calculo
	N=1;
	while(X<=Y){
		N=N*X;
		X++;
	}
	return N;
}

double SX (double X,int N){//calculo da funcao s(x)
	int Y=1,flipflop=0;
	double Z=1,fact=2;//criacao das variaveis auxiliares para o calculo
	while(Y<N){
		if(flipflop==0){
			Z=Z-(pow(X,fact)/fator(fact));
			flipflop=1;
		}else if(flipflop==1){
			Z=Z+(pow(X,fact)/fator(fact));
			flipflop=0;
		}
		Y++;
		fact+=2;
	}
	return Z;
}

int main(){
	int N;
	double X;//criacao das variaveis
	cout<<"Insira o numero de termos (entre 1 e 20) :";
	cin>>N;//input e validacao de dados para N
	while(N<1 || N>20){
		cout<<"Por favor digite um valor entre 1 e 20 ";
		cin>>N;
	}
	cout<<"Digite o valor de X :";
	cin>>X;//input de X
	X=SX(X,N);//chamada da funcao para o calculo de s(x), a variavel X e reciclada para economizar memoria
	cout<<"s(x) = "<<X;//output de s(x)
	return 0;   	
}