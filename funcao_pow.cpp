#include <iostream>

using namespace std;

int pot(int A, int B){
	int X=0,mult=A;
	while(X<B-1){
		A=A*mult;
		X++;
	}
	if(B==0){
		A=1;
	}
	return A;
}

int main(){
	int base,exp;
	cin>>base>>exp;
	base=pot(base,exp);
	cout<<base<<endl;
	return 0;
}