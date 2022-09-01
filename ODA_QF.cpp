#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int N,X=0,P=0;
	char jacare[51];
	cin>>N;
	char gene[N][2][101];
	cin>>jacare;
	while(X<N){
		cin>>gene[X][0];
		cin>>gene[X][1];
		X++;
	}
	X=0;
	while(X<N){
		if(strstr(gene[X][1],jacare)!=NULL){
			P++;
		}
		X++;
	}
	cout<<P;
	return 0;
}