#include <iostream>

#include <math.h>

#include <iomanip>

using namespace std;

struct dados
{
    int codigo; // codigo do produto
    int quantidade; // quantidade em estoque
    float preco; // preco unitario
};

void quickSort(dados vetor[], int tamanho, int i, int j){
	int trab1,trab2,esq,dir,pivo;
	float trab3;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir)/2.0)].codigo;
	do{
		while(vetor[esq].codigo < pivo){
		esq++;
		}
		while(vetor[dir].codigo > pivo){
		dir--;
		}if(esq <= dir){
		trab1 = vetor[esq].codigo;
		trab2 = vetor[esq].quantidade;
		trab3 = vetor[esq].preco;
		vetor[esq].codigo = vetor[dir].codigo;
		vetor[esq].quantidade = vetor[dir].quantidade;
		vetor[esq].preco = vetor[dir].preco;
		vetor[dir].codigo = trab1;
		vetor[dir].quantidade = trab2;
		vetor[dir].preco = trab3;	
		esq++;
		dir--;}
	}while (esq <= dir);
	if (dir-i >= 0){
	quickSort(vetor,tamanho,i,dir);
	}
	if (j-esq >= 0){
	quickSort(vetor,tamanho,esq,j);
	}
	}

int main(){
	int t=10,i=0,j=0,x=0;
	cin>>t;
	dados dado[t];
	while(x<t){
		cin>>dado[x].codigo;
		cin>>dado[x].quantidade;
		cin>>dado[x].preco;
		x++;
	}
	j=t-1;
	quickSort(dado,t,i,j);
	x=0;
	cout<<fixed<<setprecision(2);
	while(x<t){
		cout<<"Codigo: "<<dado[x].codigo<<endl;
		cout<<"Quantidade em estoque: "<<dado[x].quantidade<<endl;
		cout<<"Preco unitario: R$ "<<dado[x].preco<<endl;
		x++;
	}
	return 0;
}