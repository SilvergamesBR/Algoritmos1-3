#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int X=1,N=1;
	float S;
	cout<<fixed<<setprecision(4);
	cin>>N;
	while(X<=N){
		  S=S+(1/X);
		  X++;
	}
	cout<<S
	return 0;	
}