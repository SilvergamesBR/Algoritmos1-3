#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int I[2],L[2],C[2],lados[3];
	cin>>I[0]>>I[1]>>L[0]>>L[1]>>C[0]>>C[1];
	lados[0]=sqrt(((I[0]-L[0])*(I[0]-L[0]))+((I[1]-L[1])*(I[1]-L[1])));
	lados[1]=sqrt(((L[0]-C[0])*(L[0]-C[0]))+((L[1]-C[1])*(L[1]-C[1])));
	lados[2]=sqrt(((I[0]-C[0])*(I[0]-C[0]))+((I[1]-C[1])*(I[1]-C[1])));
	if((lados[2]*lados[2])>(lados[1]*lados[1])+(lados[0]*lados[0])){
		cout<<"Retire no local";
	}else{
		cout<<"Receba em casa";
	}
	return 0;
}