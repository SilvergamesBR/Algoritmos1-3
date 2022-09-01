#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float p,q,soned;
	cout<<"Por favor digite a quantidade de vendas e o preco do produto :";
	cin>>q>>p;
	cout<<fixed<<setprecision(2);
	if(p>0){
		if(q=0){
			soned=p*0.9;
			cout<<"Novo preco: RS "<<soned<<" (preco reduzido)";
		}else if(q>0 && q<500){
			cout<<"Novo preco: RS "<<p<<" (preco sem reajuste)";
		}else if(q>=500 && q<1000){
			soned=p*1.1;
			cout<<"Novo preco: RS "<<soned<<" (preco aumentado)";
		}else if(q>=1000){
			soned=p*1.15;
			cout<<"Novo preco: RS "<<soned<<" (preco aumentado)";
		}else{
		cout<<"Erro de entrada";
		}
	}else{
		cout<<"Erro de entrada";
	}
	return 0;
}