#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int main(){
	char RQ1[4],RQ3[4];
	int loop=0,RQ2,val=0;
	float tot=0,P1=0,P2=0,P3=0,P4=0,PQ1=0,NQ1=0,PQ3=0,NQ3=0,AP=0,AR=0,SRP=0,FSRP=0,POP=0;
	cout<<fixed<<setprecision(2);
	while(loop==0){
		tot++;
		cout<<"Q1) Voce se sente seguro para voltar as aulas presenciais? Sim ou Nao?\n";
		cin.getline(RQ1,4);
		val=0;
		while(val ==0){
			if(strcmp(RQ1,"Sim")==0){
				PQ1++;
				val=1;
			}else if(strcmp(RQ1,"Nao") == 0){
				NQ1++;
				val=1;
			}else{
				cout<<"Digite Sim ou Nao\n";
				cin.getline(RQ1,4);
			}
		}
		cout<<"Q2) Voce pretende voltar as aulas presenciais (opcao 1), ou continuar com as aulas remotas (opcao 2)?\n";
		cin>>RQ2;
		while(!(RQ2==1 || RQ2==2)){
			cout<<"insira 1 ou 2\n";
			cin>>RQ2;
		}
		if(RQ2==1){
			AP++;
		}else if(RQ2==2){
			AR++;
		}
		cout<<"Q3) Voce reside em Sta. Rita do Sapucai? Sim ou Nao?\n";
		cin.getline(RQ3,4);
		val=0;
		while(val ==0){
			if(strcmp(RQ3,"Sim")==0){
				PQ3++;
				val=1;
				if(RQ2==1){
					SRP++;
				}
			}else if(strcmp(RQ3,"Nao") == 0){
				NQ3++;
				val=1;
				if(RQ2==1){
					FSRP++;
				}
			}else{
				cout<<"Digite Sim ou Nao\n";
				cin.getline(RQ3,4);
			}
		}
		cout<<"0 para repetir,1 para encerrar";
		cin>>loop;
		while(!(loop==0 || loop==1)){
			cout<<"insira 0 ou 1\n";
			cin>>loop;
		}
	}
	POP=tot-PQ3;
	if(PQ3==0){
		PQ3=1;
	}
	if(POP==0){
		POP=1;
	}
	P1=(PQ1/tot)*100.0;
	P2=(AR/tot)*100.0;
	P3=(SRP/PQ3)*100.0;
	P4=(FSRP/(POP))*100.0;
	cout<<"A porcentagem de alunos que se sentem seguros com a volta das aulas presenciais e: "<<P1<<"%\n";
	cout<<"A porcentagem de alunos que pretendem continuar com as aulas remotas e: "<<P2<<"%\n";
	cout<<"A porcentagem de alunos que residem em Santa Rita e pretendem voltar às aulas presenciais e: "<<P3<<"%\n";
	cout<<"A porcentagem de alunos que não residem em Santa Rita e pretendem voltar às aulas presenciais e: "<<P4<<"%\n";
	return 0;
}
