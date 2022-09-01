#include <iostream>

using namespace std;
int main(){
	   int AN,AI;
	   char Nome[51];
	   cout<<"Digite seu nome: ";
	   cin.getline(Nome,51);
	   cout<<"Digite seu ano de nascimento: ";
	   cin>>AN;
	   while(AN<=1940){
		   cout<<"insira um ano valido\n";
		   cin>>AN;
	   }
	   cout<<"Digite seu ano de ingresso na empresa: ";
	   cin>>AI;
	   while(AI<=1970){
		   cout<<"insira um ano valido\n";
		   cin>>AI;
	   }
	   AN=2021-AN;
	   AI=2021-AI;
	   if(AN>= 0 || AI >= 30 ||(AN>= 60 && AN>= 25)){
		   cout<<"O funcionario esta qualificado"; 
	   }else {
		   cout<<"O funcionario ainda nao esta qualificado";
	   }
	   return 0;	
}