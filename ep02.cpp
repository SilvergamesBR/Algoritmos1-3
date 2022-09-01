#include <iostream>
using namespace std;
int main(){
	float x,y,soned;
	cout<<"Por favor digite os valores de X e Y:";
	cin>>x>>y;
	if(x>y){
		soned=((x*x)-(y*y))+(2*x*y);
	}else if(x<y){
		soned=((x*x)+(y*y))+(2*x*y);
	}else{
		soned=((2*x*y)+x)+y;
	}
	cout<<"f(x.y) = "<<soned;
	return 0;
}