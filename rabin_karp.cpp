#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

void rabin_karp(char T[],char P[],int tamT,int tamP,int d,int q){
	int h;
	int p=0;
	int t=0;
	
	for(int i=0; i<tamP; i++){
		p = (d*p + (P[i]-'0'))%q;
		t = (d*t + (T[i]-'0'))%q;
	}
	
	h = (int)pow(d,tamP-1)%q;
	
	for(int i=0; i<= tamT-tamP; i++){
		if(p == t){
			int j;
			for(j=0;j<tamP;j++){
				if(P[j] != T[i+j]){
					break;
				}
			}
			if(j == tamP) cout<<i<<endl;
		}
		if(i<tamT-tamP){
			t = (d*(t-(T[i]-'0')*h)+(T[i+tamP]-'0'))%q;
			if(t<0) t+=q;
		}
	}
}

int main(){
	
	return 0;
}