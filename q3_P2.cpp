#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout<<fixed<<setprecision(2);
	struct barraca{//criacao e declaracao da struct de armazenamento da barraca
		char nome[41];
		int peso;
		float preco;
	}barracas[50];
	int loop=0,X=0,Y=0;//criacao das variaveis padrao
	double precomed=0;
	while(loop==0 && X<50){//loop de cadastro das barracas
		cout<<"Nome da barraca a ser cadastrada: ";
		cin.getline(barracas[X].nome,40);
		cout<<"Peso da porcao em gramas: ";
		cin>>barracas[X].peso;
		while(barracas[X].peso <= 0){
			cout<<"Peso deve ser maior que 0, favor digitar novamente: ";
			cin>>barracas[X].peso;
		}
		cout<<"Preco da porcao(em R$): ";
		cin>>barracas[X].preco;
		while(barracas[X].preco <= 0){
			cout<<"Gostamos muito de torresmo, mas temos que lucrar, favor colocar um preco acima de 0: ";
			cin>>barracas[X].preco;
		}
		X++;
		cout<<"0 para novo cadastro, 1 para encerrar: ";
		cin>>loop;
		while(loop!=0 && loop !=1){
			cout<<"Favor digitar 0 para continuar ou 1 para encerrar";
			cin>>loop;
		}
		cin.ignore();
	}
	while(Y<X){//calculo e output da media de preco
		precomed=precomed+barracas[Y].preco;
		Y++;
	}
	Y=0;
	precomed=precomed/X;
	cout<<"Preco medio da porcao de torresmo = "<<precomed<<" R$"<<endl;
	cout<<"As barracas com o preco abaixo da media sao: "<<endl;
	while(Y<X){//output dos dados das barracas com precos abaixo da media
		if(barracas[Y].preco < precomed){
			cout<<"Nome: "<<barracas[Y].nome<<"\nPreco: "<<barracas[Y].preco<<" R$\nPeso: "<<barracas[Y].peso<<" gramas\n";
		}
		Y++;
	}
	return 0;
}