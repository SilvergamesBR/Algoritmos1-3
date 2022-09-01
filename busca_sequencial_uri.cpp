#include <iostream>


using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
	int Y=0,TAM=0;//contador e variavel auxiliar
	int X=0;//numero a ser procurado
	int vet[50];//vetor de armazenamento dos elementos
	bool enct=false;//variavel logica auxiliar para indicar se foi encontrado ou nao
	cin>>Y;
	while(Y!=-1&&TAM<50){//logica de preenchimento do vetor
	    vet[TAM]=Y;
	    TAM++;
	    cin>>Y;
	}
	enct=0;
	Y=0;
	cin>>X;
	while(Y<TAM&&enct==false){//sistema de busca sequencial
		if(vet[Y]==X){
			cout<<X<<" encontrado na posicao "<<Y<<endl;
			enct=true;
		}
		Y++;
	}
	if(enct==false){//sistema de checagem se o valor X foi encontrado
		cout<<X<<" não foi encontrado"<<endl;
	}
	return 0;
}