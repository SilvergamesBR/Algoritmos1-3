#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int C;
    double P;
    cout<<fixed<<setprecision(2);
    cin>>P>>C;
    switch(C){
		case(1):
			P=P*3.86;
			cout<<"R$ "<<P;
			break;
		case(2):
			P=P*3.77;
			cout<<"R$ "<<P;
			break;
		case(3):
			P=P*4.41;
			cout<<"R$ "<<P;
			break;
		case(4):
			P=P*0.19;
			cout<<"R$ "<<P;
			break;
		case(5):
			P=P*5;
			cout<<"R$ "<<P;
			break;
		default:
			cout<<"Codigo invalido";
			break;	
	}
    return 0;       
}