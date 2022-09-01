#include <iostream>
 
using namespace std;

int main() {
	int *v=NULL,*p,n,x=0;
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
		cout<<*p<<" ";
		p++;
		x++;
	}
	delete[] v;
	return 0;
}