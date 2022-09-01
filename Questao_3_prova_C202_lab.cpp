#include <iostream>

using namespace std;
int main(){
	int TotLiga=0,TotSquad=0,loop=0,Time=0,Quantidade,poder;
	char NomePersonagem[51];
	cout<<"Digite a quantidade de personagens: ";
	cin>>Quantidade;//pegasndo do usuario a quantidade de personagens
	while(loop<Quantidade){
		cout<<"Digite o nome da personagem: \n";
		cin.ignore();
		cin.getline(NomePersonagem,51);
		cout<<"Digite o valor de poder da personagem: ";
		cin>>poder;
		cout<<"Digite o time da personagem (1- liga da justica, 2-esquadrao suicida): ";
		cin>>Time;//pegando os valores necessarios
		while(!(Time == 1 || Time==2)){//apuracao de entrada
			cout<<"Digite 1 ou 2\n";
			cin>>Time;
		}
		if(Time==1){//atribuicao do poder ao time correto
			TotLiga=TotLiga+poder;
		}else if(Time==2){
			TotSquad=TotSquad+poder;
		}
		loop++;
	}
	cout<<"Poder da liga da justica: "<<TotLiga<<endl;
	cout<<"Poder do esquadrao suicida: "<<TotSquad<<endl;
	if(TotLiga>TotSquad){
		cout<<"A Liga da justica e mais poderosa";
	}else if(TotLiga<TotSquad){
		cout<<"O Esquadrao suicida e mais poderoso";
	}else{
		cout<<"As duas equipes tem a mesma quantidade de poder";
	}
	return 0;	
}