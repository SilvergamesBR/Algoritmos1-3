#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	float MPH,KMH;
	cout<<"Digite a velocidade em MPH (0-190): ";
	cin>>MPH;
	while(MPH<0 || MPH>190){
		cout<<"Por favor digite uma velocidade entre 0 e 190";
		cin>>MPH;
	}
	KMH=MPH*1.60934;
	cout<<fixed<<setprecision(1);
	cout<<"Velocidade em KM/H : "<<KMH;
	return 0;	
}