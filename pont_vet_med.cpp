#include <iostream>

#include <iomanip>

using namespace std;

int main() {
	int *v=NULL,*p,n,x=0;
	float med;
	cin>>n;
	v = new int[n];
	p=v;
	while(x<n){
		cin>>*p;
		p++;
		x++;
	}
	x=0;
	p=v;
	while(x<n){
		med+=*p;
		p++;
		x++;
	}
	med=med/n;
	cout<<fixed<<setprecision(2);
	cout<<med;
	delete[] v;
	return 0;
}