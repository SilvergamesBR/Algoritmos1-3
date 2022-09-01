#include <iostream>

#include <math.h>

using namespace std;

int comb(int n, int k){
	if(k==1){//caso k=1
		return n;
	}else if(k==n){//caso k=n
		return 1;
	}else{//chamada da recursiva para o calculo
		return comb((n-1),(k-1))+comb((n-1),k);
	}
}

int main(){
	int n,k;//declaracao dos parametros das funcoes
	int ncomb;//variavel de armazenamento do resultado
	cin>>n>>k;//captura dos inputs
	ncomb=comb(n,k);//chamada da funcao
	cout<<ncomb;//output dos dados
	return 0;
}