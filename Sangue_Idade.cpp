#include <iostream>
using namespace std;
int main(){
	char nome[50];
	int N;
	cout<<"Digite seu nome :";
	cin.getline(nome,50);
	cout<<"Digite sua idade :";
	cin>>N;
	if(N>=18 && N<=67){
		cout<<nome<<" pode doar sangue";
	}else{
		cout<<nome<<" nao pode doar sangue";
	}
	return 0;
}