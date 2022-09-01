#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int N,cont=0,Nmai=0;
	float med=0;
	cin>>N;
	int num[N],mai[N];
	while(cont<N){
		cin>>num[cont];
		cont++;
	}
	cont=0;
	while(cont<N){
		med=med+num[cont];
		cont++;
	}
	cont=0;
	med=med/N;
	while(cont<N){
		if(num[cont]>med){
			mai[Nmai]=num[cont];
			Nmai++;
		}
		cont++;
	}
	cont=0;
	cout<<fixed<<setprecision(2);
	cout<<"Media: "<<med<<endl;
	cout<<"Maiores que a media: ";
	while(cont<Nmai){
		cout<<mai[cont]<<" ";
		cont++;
	}
	return 0;	
}