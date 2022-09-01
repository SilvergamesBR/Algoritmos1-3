#include <iostream>

using namespace std;
int main(){
	int N, I, Imaior=0,X=0;
	cin>>N;
	while(X<N){
		cin>>I>>X;
		if(I>0){
			if(I>Imaior){
				Imaior=I;
			}
			X++;
		}
	}
	cout<<Imaior;
	return 0;       
}