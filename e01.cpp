#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	float X,sumX=0;
	cout<<fixed<<setprecision(5);
	cout<<"Por favor digite o valor de X :";
	cin>>X;
	for(int N=1;N<6;N++){
		sumX=sumX+(N/pow(X,N));
	}
	if(X==0){
		cout<<"C�lculo imposs�vel para este valor de x";
	}else{
		cout<<"f(x) = "<<1/sumX;
	}
	return 0;
}