#include <iostream>

#include <cstdlib>

#include <iomanip>
 
using namespace std;

int pot(int a, int n){
    if(n==0){
        return 1;
    }else{
        n--;
        return (a*pot(a,n));
    }
}

float raiz(int x,int x0, float e){
	int x1;
	if((abs(pot(x0,2)-x))<=e){
		return x0;
	}else{
		x1=(pot(x0,2)+x)/(2*x0);
		return raiz(x,x1,e);
	}
}
 
int main() {
    int x,x0;
    float limitanti;
    cin>>x>>x0>>limitanti;
    limitanti= raiz(x,x0,limitanti);
    cout<<fixed<<setprecision(2);
    cout<<limitanti<<endl;
}