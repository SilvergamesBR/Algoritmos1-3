#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main(){
	int Quant;
	double Fx=0.0, N=1.0,fat=2.0,Nfat=1.0,X,exp=1.0;
	cout<<"Valor de X : ";
	cin>>X;
	cout<<"Quantos termos ? ";
	cin>>Quant;
	while(N<0){
		cout<<"Por favor digite um numero maior que 0\n";
		cin>>Quant;
	}
	while(Quant>0){
		while(N<fat){
			N++;
			Nfat=Nfat*N;
		}
		N=1.0;
		fat=fat+2.0;
		Fx=Fx+(pow(X,exp)/Nfat);
		Nfat=1.0;
		exp=exp+2.0;
		Quant--;
	}
	cout<<fixed<<setprecision(6);
	cout<<"f(x) = "<<Fx;
	return 0;	
}