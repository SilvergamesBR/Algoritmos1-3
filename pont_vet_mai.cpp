#include <iostream>

using namespace std;

int main() {
	int *v=NULL,*p,n,x=0;
	int mai;
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
	mai = v[0];
	while(x<n){
		if(mai<*p){
			mai=*p;
		}
		p++;
		x++;
	}
	cout<<mai;
	delete[] v;
	return 0;
}