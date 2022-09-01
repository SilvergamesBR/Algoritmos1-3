#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main(){
	double X,soma=0;
	int exponente=1;
	cout<<"Digite o valor de X: ";
	cin>>X;
	cout<<fixed<<setprecision(2);
	while(exponente<=50){
		soma=soma+(pow(X,exponente)/(51-exponente));
		exponente++;
	}
	cout<<"f(X)= "<<soma;
	return 0;	
}