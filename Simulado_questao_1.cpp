#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

void rabin_karp(char T[],char P[],int tamT,int tamP,int d,int q){
	int h;
	int p=0;
	int t=0;
	int ultsaida=0;
	int nsaidas=0;
	
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
			if(j == tamP){
				ultsaida = i;
				nsaidas++;
			}
		}
		if(i<tamT-tamP){
			t = (d*(t-(T[i]-'0')*h)+(T[i+tamP]-'0'))%q;
			if(t<0) t+=q;
		}
	}
	
	if(nsaidas != 0) cout<<"Ultima ocorrencia: "<<ultsaida<<endl;
	cout<<nsaidas<<" ocorrencia(s)\n";
}

void calcula_LPS(int lps[],char P[],int tamP){
	int tam = 0;
	lps[0]=0;
	int i =1;
	while(i<tamP){
		if(P[i]==P[tam]){
			tam++;
			lps[i]=tam;
			i++;
		}else{
			if(tam != 0){
				tam = lps[tam-1];
			}else{
				lps[i] = 0;
				i++;
			}
		}
	}
}

void kmp(char T[],char P[],int tamT,int tamP){
	int lps[tamP];
	calcula_LPS(lps,P,tamP);
	
	int j=0;
	int i=0;
	while(i<tamT){
		if(T[i]==P[j]){//match
			j++;
			i++;
			if(j == tamP){
				cout<<i-tamP<<endl;
				j=lps[j-1];
			}
		}else{//mismatch
			if(j!=0){
				j=lps[j-1];
			}else{
				i++;
			}
		}
	}
}

int main(){
	char T[100][30],P[3];
	int n=0,x=0;
	P[0] ='m';
	P[1] ='a';
	P[2] ='r';
	cin>>n;
	while(x<n){
		cin.getline(T[x],30,'\n');
		x++;
	}
	x=0;
	while(x<n){
		kmp(T[x],P,strlen(T[x]),strlen(P));
		x++;
	}
	return 0;
}