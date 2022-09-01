#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int loop=0,NomeLoop=0;
	float TOT=0,MG=0,NMG=0;
	char Name[51],CPF[12],estado[3],MGC[3]={'M','G','\0'};
	while(loop==0){
		cout<<"Insira o nome :\n";
		cin.getline(Name,51);
		if(NomeLoop==1){
			cin.getline(Name,51);//tava dando um bug muito estranho onde o codigo simplemesnte pulava o cin.getline do nome, esse foi o unico jeito que eu consegui arrumar
		}
		cout<<"Insira o CPF :\n";
		cin.getline(CPF,12);
		cout<<"Insira a sigla do estado :\n";
		cin.getline(estado,3);
		if(strcmp(estado, MGC)){
			NMG++;
		}else{
			MG++;	
		}
		cout<<"Para adicionar mais 1 cadastro digite 0, para encerrar os cadastros digite 1\n";	 
		cin>>loop;
		if(NomeLoop==0){
			NomeLoop++;
		}
	}
	TOT=MG+NMG;
	MG=(MG/(TOT))*100.0;
	NMG=(NMG/(TOT))*100.0;
	cout<<"A porcentagem de visitantes de MG e "<<MG<<"%\nA porcentagem de visitantes de fora de MG e "<<NMG<<"%";
	return 0;
}