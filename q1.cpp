#include <iostream>
#include <iomanip>

using namespace std;

float converte(float VEL){
	VEL=VEL*1.60934;
	return VEL;
}

int main(){
	float MPH,KMH;
	cout<<"Digite a velocidade em MPH (>0): ";
	cin>>MPH;
	while(MPH<0 || MPH>190){
		cout<<"Por favor digite uma velocidade maior que zero";
		cin>>MPH;
	}
	KMH=converte(MPH);
	cout<<fixed<<setprecision(1);
	cout<<"Velocidade em KM/H : "<<KMH;
	return 0;	
}