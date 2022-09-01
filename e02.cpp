#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int Sinal=1;
	float sumX=0,factX=1;
	cout<<fixed<<setprecision(5);
	for(int N=1;N<10;N=N+2){
		for(int Y=1;Y<=N;Y++){
			   	factX=factX*Y;
		}
		sumX=sumX+(Sinal*(N/factX));
		cout<<sumX<<endl<<Sinal<<endl;
		if(N>1){
			Sinal= Sinal*-1;
		}
		factX=1;
	}
	cout<<"f(x) = "<<sumX;
	return 0;
}