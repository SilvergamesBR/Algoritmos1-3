#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int C;
	float F;
	char cidade[51];
	cout<<fixed<<setprecision(2);
	cout<<"Por favor digite o nome da cidade: ";
	cin.getline(cidade,51);//pegando as variaveis de imput do usuario
	cout<<"Digite a temperatura em C: ";
	cin>>C;
	F=C*1.8+32.0;//convertendo de C para F
	cout<<"Graus C = "<<C<<endl<<"Graus F = "<<F<<endl;//output dos graus
	if(F<=40){//fazendo verificacao se vai nevar ou nao
		cout<<"Vai nevar";
	}else{
		cout<<"Nao vai nevar";
	}
	return 0;
}