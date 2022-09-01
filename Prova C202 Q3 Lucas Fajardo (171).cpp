#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int loop=0,tot=0;
	float res=0,com=0,comE=0,resS=0;
	char cod[5],tipo,font;
	while(loop==0){
		cout<<"Leitura de dados :\n";
		cout<<"Digite o codigo: ";
		cin.ignore();
		cin.getline(cod,5);
		cout<<"Qual o tipo de consumo? R (residencial) ou C (comercial) ";
		cin>>tipo;
		while(tipo!='R' && tipo!='C'){
			cout<<"Por favor digite C ou R ";
			cin>>tipo;
		}
		if(tipo=='R'){
			res++;
		}else{
			com++;
		}
		cout<<"Qual a fonte energetica usada? E (eletrica), S (solar) ou O (outras) ";
		cin>>font;
		while(font!='E' && font!='S' && font!='O'){
			cout<<"Por favor digite E, S ou O ";
			cin>>font;
		}
		if(font=='E' && tipo=='C'){
			comE++;
		}
		if(font=='S' && tipo=='R'){
			resS++;
		}
		tot++;
		cout<<"0 para novo cadastro 1 para encerrar ";
		cin>>loop;
	}
	cout<<"Consumidores pesquisados: "<<tot<<endl;
	cout<<"Tipo Residencial: "<<(res/tot)*100.0<<"%\n";
	cout<<"Tipo Comercial: "<<(com/tot)*100.0<<"%\n";
	cout<<"Comercios que usam energia eletrica: "<<(comE/com)*100.0<<"%\n";
	cout<<"Residencias que usam energia solar: "<<(resS/res)*100.0<<"%\n";
	return 0;	
}