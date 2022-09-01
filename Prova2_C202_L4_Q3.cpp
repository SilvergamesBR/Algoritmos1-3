#include <iostream>
#include <iomanip>

using namespace std;

float dist(float S,float S0){//declaracao da funcao para o calculo da distancia
	S=S-S0;//calculo da distancia
	return S;
}

void Vm(float S,float T0,float T){//declaracao da funcao para calculo da velociadade media
	float VM=0;
	VM=S/(T-T0);//calculo da velocidade media
	cout<<"Velocidade media (m/s): "<<VM<<endl;//output da velocidade media
}

void Vi(float &V0, float &A,float &T){
	V0=V0+(A*T);//calculo da velocidade instantanea com resultado guardado em V0 para economizar memoria
}
int main(){
	cout<<fixed<<setprecision(1);
	float S0,S,T0,T,V0,A;//declaracao das variaveis
	cin>>S0>>S>>T0>>T>>V0>>A;//input do usuario
	S=dist(S,S0);//distancia e armazenada na variavel S para economizar espaco na memoria
	cout<<"Distancia percorrida (m): "<<S<<endl;//output da distancia percorrida
	Vm(S,T0,T);//chamada da funcao de calculo de velocidade media
	Vi(V0,A,T);//chamada da funcao de calculo da velocidade instantanea
	cout<<"Velocidade instantanea (m/s): "<<V0<<endl;//output da velocidade instantanea
	return 0;	
}