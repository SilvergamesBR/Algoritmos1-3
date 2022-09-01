#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int N=0,opc=0;
	float P,O1=0,O2=0,O3=0;
	cin>>N;
	cout<<fixed<<setprecision(2);
	for(int X=0;X<N;X++){
		cout<<"Você aprova as ações do governo federal com relação à pandemia (1 p/ sim ; 2 p/ não ; 3 p/ não sei)?";
		cin>>opc;
		switch(opc){
			case 1:
				O1++;
				break;
			case 2:
				O2++;
				break;
			case 3:
				O3++;
				break;
		}
	}
	P=(O1/N)*100;
	cout<<P<<"% dos entrevistados disseram que sim, totalizando "<<O1<<" pessoas"<<endl;
	P=(O2/N)*100;
	cout<<P<<"% dos entrevistados disseram que nao, totalizando "<<O2<<" pessoas"<<endl;
	P=(O3/N)*100;
	cout<<P<<"% dos entrevistados disseram que nao sabiam, totalizando "<<O3<<" pessoas"<<endl;
	return 0;
}