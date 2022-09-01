#include <iostream>
using namespace std;
int main(){
	float t,soned;
	cout<<"Por favor digite o valor de t :";
	cin>>t;
	if(t>=-1 && t<=1){
		if(t<0){
			t=-t;
		}
		xt=1-t;
		cout<<"x(t) = "<<soned;
	}else{
		cout<<"x(t) = 0";
	}
	return 0;
}