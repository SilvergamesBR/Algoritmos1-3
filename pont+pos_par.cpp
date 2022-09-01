#include <iostream>

using namespace std;

int main() {
	int *v=NULL,*p,n,x=0;
	int pp=0;
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
		if((*p%2==0)&&(*p>0)){
			pp++;
		}
		p++;
		x++;
	}
	cout<<pp;
	delete[] v;
	return 0;
}