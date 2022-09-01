#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	   int Quantidade=0,Numero,QuantPrimos=0,loop=0,TestPrimo,Falso=0;
	   cout<<"Digite a quantidade de numeros a serem verificados: ";
	   cin>>Quantidade;//pegando a quantidade de numero do usuario
	   while(loop<Quantidade){
		   cin>>Numero;
		   TestPrimo=2;//resetando a variavel
		   while(TestPrimo<Numero){//testa se um numero e primo (meio ineficiente,poderia ser melhor)
			   if(Numero%TestPrimo==0){
				   Falso=1;
			   }
			   TestPrimo++;
		   }
		   if(Falso==0){
			   QuantPrimos++;
		   }
		   Falso=0;//resetando a variavel
		   loop++;
	   }
	   if(QuantPrimos>0){
	   	   cout<<QuantPrimos<<" numero(s) primo(s)";
	   }else{
		   cout<<"Nenhum numero primo lido";
	   }
	   return 0;	
}