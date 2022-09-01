#include <iostream>
#include <string.h>

using namespace std;
int main(){
	struct participante{
		char nome[81];
		char CPF[12];
		int idade;
	};
	participante participantes[200];
	int loop=0,X=0,Y=0;
	char CPFdes[12];
	while(loop==0 && X<200){
		cout<<"Digite o nome do participante: ";
		cin.getline(participantes[X].nome,80);
		cout<<"Digite o CPF do participante: ";
		cin.getline(participantes[X].CPF,12);
		cout<<"Digite a idade do participante: ";
		cin>>participantes[X].idade;
		while(participantes[X].idade<10 || participantes[X].idade>80){
			cout<<"idade invalidada, favor colocar um valor entre 10 e 80 ";
			cin>>participantes[X].idade;
		}
		X++;
		cout<<"0 para novo cadastro, 1 para encerrar ";
		cin>>loop;
		cin.ignore();
	}
	X--;
	loop=0;
	cout<<"Digite o cpf desejado: ";
	cin.getline(CPFdes,12);
	while(loop==0){
		if(strcmp(CPFdes,participantes[X].CPF)==0){
			loop=1;
			cout<<"Nome: "<<participantes[X].nome<<"  Idade: "<<participantes[X].idade<<endl;
		}
		if(strcmp(CPFdes,participantes[Y].CPF)==0 && loop==0){
			loop=1;
			cout<<"Nome: "<<participantes[Y].nome<<"  Idade: "<<participantes[Y].idade<<endl;
		}
		X--;
		Y++;
		if(X<Y && loop==0){
			cout<<"CPF invalido";
			loop=1;
		}
	}
	return 0;	
}