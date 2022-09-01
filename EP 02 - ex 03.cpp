#include <iostream>

using namespace std;
int main(){
	   int idade,opcao,loop=0;
	   float A=0,B=0,C=0,D=0,tot=0;
	   while(loop==0){
 	    	cout<<"Insira uma idade\n";
			cin>>idade;
 	    	while(idade<0){
				cout<<"insira uma idade >0\n";
				cin>>idade;		 
			}
 	    	cout<<"Insira sua opcao";
			cin>>opcao;
 	    	while(!(opcao==1 || opcao==2)){
				 cout<<"insira uma opcao valida\n";
				 cin>>opcao;
			}
			 if(idade<=15){
				cout<<"plano A \n";
				A++;
			 }else if(idade>15 && idade<=35){
				 if(opcao==1){
					 cout<<"plano A \n";
					 A++;
				 }else if(opcao==2){
					 cout<<"plano B \n";
					 B++;
				 }
			 }else if(idade>35 && idade<=55){
				 if(opcao==1){
					 cout<<"plano B \n";
					 B++;
				 }else if(opcao==2){
					 cout<<"plano C \n";
					 C++;
				 }
			 }else if(idade>=35){
				 if(opcao==1){
					 cout<<"plano C \n";
					 C++;
				 }else if(opcao==2){
					 cout<<"plano D \n";
					 D++;
				 }
			 }
			 cout<<"0 para novo cadastro, 1 para encerrar\n";
			 cin>>loop;
			 while(!(loop==0 || loop==1)){
				 cout<<"insira 0 ou 1\n";
				 cin>>loop;
			}
	   }
	   tot=A+B+C+D;
	   A=(A/tot)*100.0;
	   B=(B/tot)*100.0;
	   C=(C/tot)*100.0;
	   D=(D/tot)*100.0;
	   cout<<"A = "<<A<<"%\n"<<"B = "<<B<<"%\n"<<"C = "<<C<<"%\n"<<"D = "<<D<<"%\n";
	   return 0;	
}