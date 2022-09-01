#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

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

void kmp(char T[],char P[],int tamT,int tamP){//a funcao verifica se o jogador esta classificado e caso esteja seta uma flag para nao haver a saida de jogador nao classificado e quebra o loop de verificacao
	int lps[tamP];
	calcula_LPS(lps,P,tamP);
	bool verify = false;
	int j=0;
	int i=0;
	while(i<tamT){
		if(T[i]==P[j]){//match
			j++;
			i++;
			if(j == tamP){
				cout<<"Jogador Classificado";
				cout<<i-tamP<<endl;
				verify = true;
				break;
			}
		}else{//mismatch
			if(j!=0){
				j=lps[j-1];
			}else{
				i++;
			}
		}
	}
	if(verify == false){
		cout<<"Jogador nao classificado";
	}
}

int main(){
	char T[100],P[100];//strings para a busca
	cin.getline(T,100,'\n');//inputs do usuario
	cin.getline(P,100,'\n');
	kmp(T,P,strlen(T),strlen(P));//chamada da funcao kmp para fazer o stringmatch
	return 0;
}