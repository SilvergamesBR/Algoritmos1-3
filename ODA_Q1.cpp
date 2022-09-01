#include <iostream>

using namespace std;

int main(){
	int X,Y,Z=0,J=0;
	cin>>X;
	cin>>Y;
	int relat[X],relatF[Y];
	while(Z<X){
		cin>>relat[Z];
		Z++;
	}
	Z=0;
	while(Z<Y){
		cin>>relatF[Z];
		Z++;
	}
	Z=0;
	while(Z<X){
		while(J<Y){
			if(relat[Z]==relatF[J]){
				relat[Z]=0;
			}
			J++;
		}
		J=0;
		Z++;
	}
	Z=0;
	while(Z<X){
		if(relat[Z]!=0){
			cout<<relat[Z]<<" ";
		}
		Z++;
	}
	return 0;
}