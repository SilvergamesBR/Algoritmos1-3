#include <iostream>

using namespace std;

int conta(int N, int K){
	if(N==0){//case de N ==0
		return 0;
	}else{//chamada recursiva para o caso de N!=0
		return (conta((N/10),K)+ (N%10==K));
	}
}

int main(){	
	int N,K;//declaracao das variaveis que serao passadas como parametros para a funcao
	int auxout;//variavel auxiliar para a saida de dados
	cin>>N>>K;//loop de entrada de dados e chamada da funcao quando os parametros sao diferentes de -1
	while(N != -1 && K != -1){
		auxout=conta(N,K);
		cout<<auxout<<endl;
		cin>>N>>K;
	}
	return 0;
}