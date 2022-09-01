#include <iostream>


using namespace std;
int main(){
	int Men=0,TAM=0,Mai=0,Med=0,Y=0;//contador e variaveis auxiliares
	int X=0;//numero a ser procurado
	int vet[50];//vetor de armazenamento dos elementos
	bool enct=false;//variavel logica auxiliar para indicar se foi encontrado ou nao
	cin>>Y;
	while(Y!=-1&&TAM<50){//logica de preenchimento do vetor
	    vet[TAM]=Y;
	    TAM++;
	    cin>>Y;
	}
	Y=0;
	Mai=TAM;
	cin>>X;
	while(Men<=Mai && enct==false){//sistema de busca binaria
	    Med=(Mai+Men)/2;
	    if(vet[Med]<X){
	        Men=Med+1;
	    }else if(vet[Med]>X){
	        Mai=Med-1;
	    }else{
	        enct=true;
	    }
	}
	if(enct==false){//sistema de checagem se o valor X foi encontrado
		cout<<"Nao possui acesso"<<endl;
	}else if(enct==true){
	    cout<<"Possui acesso"<<endl;
	}
	return 0;
}