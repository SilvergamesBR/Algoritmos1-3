#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float S,N=1,X=1;
	cout<<fixed<<setprecision(4);
	cin>>N;
	while(X<=N){
		  S=S+(1/X);
		  X++;
	}
	cout<<S;
	return 0;	
}