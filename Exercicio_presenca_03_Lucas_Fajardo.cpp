#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n,soma,media;
    int positivos=0,x=0;
    for (int x=0;x<10;x++){
		cin>>n;
		soma=soma+n;
		if(n>0){
			positivos++;
		}
	}
	cout<<fixed<<setprecision(2);
	media=soma/10;
	cout<<"Positivos :"<<positivos<<endl<<"Media :"<<media;
    return 0;       
}